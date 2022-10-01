// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINACCESSCONTROLREQUEST_H
#define QTAWS_GETORIGINACCESSCONTROLREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginAccessControlRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetOriginAccessControlRequest : public CloudFrontRequest {

public:
    GetOriginAccessControlRequest(const GetOriginAccessControlRequest &other);
    GetOriginAccessControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOriginAccessControlRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
