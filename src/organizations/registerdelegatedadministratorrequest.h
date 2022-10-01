// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDELEGATEDADMINISTRATORREQUEST_H
#define QTAWS_REGISTERDELEGATEDADMINISTRATORREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class RegisterDelegatedAdministratorRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT RegisterDelegatedAdministratorRequest : public OrganizationsRequest {

public:
    RegisterDelegatedAdministratorRequest(const RegisterDelegatedAdministratorRequest &other);
    RegisterDelegatedAdministratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDelegatedAdministratorRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
