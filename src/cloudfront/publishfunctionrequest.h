// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHFUNCTIONREQUEST_H
#define QTAWS_PUBLISHFUNCTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class PublishFunctionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT PublishFunctionRequest : public CloudFrontRequest {

public:
    PublishFunctionRequest(const PublishFunctionRequest &other);
    PublishFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
