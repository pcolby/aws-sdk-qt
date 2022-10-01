// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERIESRESPONSE_H
#define QTAWS_LISTQUERIESRESPONSE_H

#include "cloudtrailresponse.h"
#include "listqueriesrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListQueriesResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT ListQueriesResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    ListQueriesResponse(const ListQueriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQueriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueriesResponse)
    Q_DISABLE_COPY(ListQueriesResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
