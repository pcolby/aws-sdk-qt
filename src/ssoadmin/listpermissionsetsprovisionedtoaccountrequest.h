// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETSPROVISIONEDTOACCOUNTREQUEST_H
#define QTAWS_LISTPERMISSIONSETSPROVISIONEDTOACCOUNTREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetsProvisionedToAccountRequestPrivate;

class QTAWSSSOADMIN_EXPORT ListPermissionSetsProvisionedToAccountRequest : public SsoAdminRequest {

public:
    ListPermissionSetsProvisionedToAccountRequest(const ListPermissionSetsProvisionedToAccountRequest &other);
    ListPermissionSetsProvisionedToAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionSetsProvisionedToAccountRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
