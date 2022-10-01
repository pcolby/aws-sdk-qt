// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOKENREQUEST_H
#define QTAWS_DELETETOKENREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteTokenRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteTokenRequest : public AmplifyBackendRequest {

public:
    DeleteTokenRequest(const DeleteTokenRequest &other);
    DeleteTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTokenRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
