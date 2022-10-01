// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDAUTHREQUEST_H
#define QTAWS_CREATEBACKENDAUTHREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendAuthRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateBackendAuthRequest : public AmplifyBackendRequest {

public:
    CreateBackendAuthRequest(const CreateBackendAuthRequest &other);
    CreateBackendAuthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
