// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGDISTRIBUTIONWITHTAGSREQUEST_H
#define QTAWS_CREATESTREAMINGDISTRIBUTIONWITHTAGSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateStreamingDistributionWithTagsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateStreamingDistributionWithTagsRequest : public CloudFrontRequest {

public:
    CreateStreamingDistributionWithTagsRequest(const CreateStreamingDistributionWithTagsRequest &other);
    CreateStreamingDistributionWithTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingDistributionWithTagsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
