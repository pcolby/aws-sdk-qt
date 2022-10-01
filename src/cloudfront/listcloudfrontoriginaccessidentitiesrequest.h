// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLOUDFRONTORIGINACCESSIDENTITIESREQUEST_H
#define QTAWS_LISTCLOUDFRONTORIGINACCESSIDENTITIESREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListCloudFrontOriginAccessIdentitiesRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListCloudFrontOriginAccessIdentitiesRequest : public CloudFrontRequest {

public:
    ListCloudFrontOriginAccessIdentitiesRequest(const ListCloudFrontOriginAccessIdentitiesRequest &other);
    ListCloudFrontOriginAccessIdentitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCloudFrontOriginAccessIdentitiesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
