// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONGROUPSBYUSERREQUEST_H
#define QTAWS_LISTPERMISSIONGROUPSBYUSERREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class ListPermissionGroupsByUserRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT ListPermissionGroupsByUserRequest : public FinspaceDataRequest {

public:
    ListPermissionGroupsByUserRequest(const ListPermissionGroupsByUserRequest &other);
    ListPermissionGroupsByUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionGroupsByUserRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
