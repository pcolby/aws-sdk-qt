// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDAUTHREQUEST_H
#define QTAWS_UPDATEBACKENDAUTHREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendAuthRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendAuthRequest : public AmplifyBackendRequest {

public:
    UpdateBackendAuthRequest(const UpdateBackendAuthRequest &other);
    UpdateBackendAuthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
