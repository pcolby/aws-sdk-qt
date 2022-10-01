// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINVALIDATIONREQUEST_H
#define QTAWS_CREATEINVALIDATIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateInvalidationRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateInvalidationRequest : public CloudFrontRequest {

public:
    CreateInvalidationRequest(const CreateInvalidationRequest &other);
    CreateInvalidationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInvalidationRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
