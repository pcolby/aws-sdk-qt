// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALOUSLOGGROUPSRESPONSE_H
#define QTAWS_LISTANOMALOUSLOGGROUPSRESPONSE_H

#include "devopsgururesponse.h"
#include "listanomalousloggroupsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListAnomalousLogGroupsResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT ListAnomalousLogGroupsResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    ListAnomalousLogGroupsResponse(const ListAnomalousLogGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnomalousLogGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomalousLogGroupsResponse)
    Q_DISABLE_COPY(ListAnomalousLogGroupsResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
