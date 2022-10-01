// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETSREQUEST_H
#define QTAWS_LISTPERMISSIONSETSREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetsRequestPrivate;

class QTAWSSSOADMIN_EXPORT ListPermissionSetsRequest : public SsoAdminRequest {

public:
    ListPermissionSetsRequest(const ListPermissionSetsRequest &other);
    ListPermissionSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionSetsRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
