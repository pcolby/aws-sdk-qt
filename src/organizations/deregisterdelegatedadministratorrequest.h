// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDELEGATEDADMINISTRATORREQUEST_H
#define QTAWS_DEREGISTERDELEGATEDADMINISTRATORREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class DeregisterDelegatedAdministratorRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT DeregisterDelegatedAdministratorRequest : public OrganizationsRequest {

public:
    DeregisterDelegatedAdministratorRequest(const DeregisterDelegatedAdministratorRequest &other);
    DeregisterDelegatedAdministratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterDelegatedAdministratorRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
