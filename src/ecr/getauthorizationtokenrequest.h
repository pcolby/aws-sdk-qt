// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZATIONTOKENREQUEST_H
#define QTAWS_GETAUTHORIZATIONTOKENREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class GetAuthorizationTokenRequestPrivate;

class QTAWSECR_EXPORT GetAuthorizationTokenRequest : public EcrRequest {

public:
    GetAuthorizationTokenRequest(const GetAuthorizationTokenRequest &other);
    GetAuthorizationTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAuthorizationTokenRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
