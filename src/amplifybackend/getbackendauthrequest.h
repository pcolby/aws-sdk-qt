// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAUTHREQUEST_H
#define QTAWS_GETBACKENDAUTHREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAuthRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendAuthRequest : public AmplifyBackendRequest {

public:
    GetBackendAuthRequest(const GetBackendAuthRequest &other);
    GetBackendAuthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
