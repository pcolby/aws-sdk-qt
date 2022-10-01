// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCEREQUEST_H
#define QTAWS_UNTAGRESOURCEREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class UntagResourceRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT UntagResourceRequest : public KinesisAnalyticsV2Request {

public:
    UntagResourceRequest(const UntagResourceRequest &other);
    UntagResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagResourceRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
