// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEACCOUNTTOORGANIZATIONREQUEST_H
#define QTAWS_INVITEACCOUNTTOORGANIZATIONREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class InviteAccountToOrganizationRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT InviteAccountToOrganizationRequest : public OrganizationsRequest {

public:
    InviteAccountToOrganizationRequest(const InviteAccountToOrganizationRequest &other);
    InviteAccountToOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InviteAccountToOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
