// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAILSRESPONSE_H
#define QTAWS_LISTTRAILSRESPONSE_H

#include "cloudtrailresponse.h"
#include "listtrailsrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListTrailsResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT ListTrailsResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    ListTrailsResponse(const ListTrailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrailsResponse)
    Q_DISABLE_COPY(ListTrailsResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
