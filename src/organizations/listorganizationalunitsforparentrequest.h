// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONALUNITSFORPARENTREQUEST_H
#define QTAWS_LISTORGANIZATIONALUNITSFORPARENTREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListOrganizationalUnitsForParentRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListOrganizationalUnitsForParentRequest : public OrganizationsRequest {

public:
    ListOrganizationalUnitsForParentRequest(const ListOrganizationalUnitsForParentRequest &other);
    ListOrganizationalUnitsForParentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationalUnitsForParentRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
