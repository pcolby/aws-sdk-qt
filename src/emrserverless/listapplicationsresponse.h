// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSRESPONSE_H
#define QTAWS_LISTAPPLICATIONSRESPONSE_H

#include "emrserverlessresponse.h"
#include "listapplicationsrequest.h"

namespace QtAws {
namespace EmrServerless {

class ListApplicationsResponsePrivate;

class QTAWSEMRSERVERLESS_EXPORT ListApplicationsResponse : public EmrServerlessResponse {
    Q_OBJECT

public:
    ListApplicationsResponse(const ListApplicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationsResponse)
    Q_DISABLE_COPY(ListApplicationsResponse)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
