// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORGANIZATIONALUNITREQUEST_H
#define QTAWS_CREATEORGANIZATIONALUNITREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class CreateOrganizationalUnitRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT CreateOrganizationalUnitRequest : public OrganizationsRequest {

public:
    CreateOrganizationalUnitRequest(const CreateOrganizationalUnitRequest &other);
    CreateOrganizationalUnitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOrganizationalUnitRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
