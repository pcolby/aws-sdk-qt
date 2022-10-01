// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECACHEPOLICYREQUEST_H
#define QTAWS_UPDATECACHEPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateCachePolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateCachePolicyRequest : public CloudFrontRequest {

public:
    UpdateCachePolicyRequest(const UpdateCachePolicyRequest &other);
    UpdateCachePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCachePolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
