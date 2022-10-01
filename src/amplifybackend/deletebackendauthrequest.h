// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDAUTHREQUEST_H
#define QTAWS_DELETEBACKENDAUTHREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendAuthRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteBackendAuthRequest : public AmplifyBackendRequest {

public:
    DeleteBackendAuthRequest(const DeleteBackendAuthRequest &other);
    DeleteBackendAuthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
