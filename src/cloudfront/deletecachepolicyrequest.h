// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHEPOLICYREQUEST_H
#define QTAWS_DELETECACHEPOLICYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteCachePolicyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteCachePolicyRequest : public CloudFrontRequest {

public:
    DeleteCachePolicyRequest(const DeleteCachePolicyRequest &other);
    DeleteCachePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCachePolicyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
