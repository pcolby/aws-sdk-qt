// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEPOLICYREQUEST_H
#define QTAWS_CREATECACHEPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateCachePolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateCachePolicyRequest : public CloudFrontRequest {

public:
    CreateCachePolicyRequest(const CreateCachePolicyRequest &other);
    CreateCachePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCachePolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
