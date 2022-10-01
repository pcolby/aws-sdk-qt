// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCEREQUEST_H
#define QTAWS_LISTTAGSFORRESOURCEREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class ListTagsForResourceRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT ListTagsForResourceRequest : public KinesisAnalyticsV2Request {

public:
    ListTagsForResourceRequest(const ListTagsForResourceRequest &other);
    ListTagsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForResourceRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
