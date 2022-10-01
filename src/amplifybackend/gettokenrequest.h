// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOKENREQUEST_H
#define QTAWS_GETTOKENREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetTokenRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetTokenRequest : public AmplifyBackendRequest {

public:
    GetTokenRequest(const GetTokenRequest &other);
    GetTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTokenRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
