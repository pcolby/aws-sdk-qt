// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONALUNITREQUEST_H
#define QTAWS_UPDATEORGANIZATIONALUNITREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class UpdateOrganizationalUnitRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT UpdateOrganizationalUnitRequest : public OrganizationsRequest {

public:
    UpdateOrganizationalUnitRequest(const UpdateOrganizationalUnitRequest &other);
    UpdateOrganizationalUnitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOrganizationalUnitRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
