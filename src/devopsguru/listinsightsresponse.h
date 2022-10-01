// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSIGHTSRESPONSE_H
#define QTAWS_LISTINSIGHTSRESPONSE_H

#include "devopsgururesponse.h"
#include "listinsightsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListInsightsResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT ListInsightsResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    ListInsightsResponse(const ListInsightsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInsightsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInsightsResponse)
    Q_DISABLE_COPY(ListInsightsResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
