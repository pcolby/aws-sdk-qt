// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOKENREQUEST_H
#define QTAWS_CREATETOKENREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateTokenRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateTokenRequest : public AmplifyBackendRequest {

public:
    CreateTokenRequest(const CreateTokenRequest &other);
    CreateTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTokenRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
