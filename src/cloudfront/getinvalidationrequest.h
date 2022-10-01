// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVALIDATIONREQUEST_H
#define QTAWS_GETINVALIDATIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetInvalidationRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetInvalidationRequest : public CloudFrontRequest {

public:
    GetInvalidationRequest(const GetInvalidationRequest &other);
    GetInvalidationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInvalidationRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
