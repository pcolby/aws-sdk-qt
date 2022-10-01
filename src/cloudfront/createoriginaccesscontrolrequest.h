// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINACCESSCONTROLREQUEST_H
#define QTAWS_CREATEORIGINACCESSCONTROLREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateOriginAccessControlRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateOriginAccessControlRequest : public CloudFrontRequest {

public:
    CreateOriginAccessControlRequest(const CreateOriginAccessControlRequest &other);
    CreateOriginAccessControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOriginAccessControlRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
