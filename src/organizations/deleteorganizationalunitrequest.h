// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONALUNITREQUEST_H
#define QTAWS_DELETEORGANIZATIONALUNITREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class DeleteOrganizationalUnitRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT DeleteOrganizationalUnitRequest : public OrganizationsRequest {

public:
    DeleteOrganizationalUnitRequest(const DeleteOrganizationalUnitRequest &other);
    DeleteOrganizationalUnitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOrganizationalUnitRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
