// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONWITHTAGSREQUEST_H
#define QTAWS_CREATEDISTRIBUTIONWITHTAGSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateDistributionWithTagsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateDistributionWithTagsRequest : public CloudFrontRequest {

public:
    CreateDistributionWithTagsRequest(const CreateDistributionWithTagsRequest &other);
    CreateDistributionWithTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDistributionWithTagsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
