// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINACCESSCONTROLCONFIGREQUEST_H
#define QTAWS_GETORIGINACCESSCONTROLCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginAccessControlConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetOriginAccessControlConfigRequest : public CloudFrontRequest {

public:
    GetOriginAccessControlConfigRequest(const GetOriginAccessControlConfigRequest &other);
    GetOriginAccessControlConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOriginAccessControlConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
