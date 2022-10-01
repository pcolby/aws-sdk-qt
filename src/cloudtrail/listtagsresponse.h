// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSRESPONSE_H
#define QTAWS_LISTTAGSRESPONSE_H

#include "cloudtrailresponse.h"
#include "listtagsrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListTagsResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT ListTagsResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    ListTagsResponse(const ListTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsResponse)
    Q_DISABLE_COPY(ListTagsResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
