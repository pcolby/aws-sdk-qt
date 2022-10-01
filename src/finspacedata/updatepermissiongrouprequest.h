// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONGROUPREQUEST_H
#define QTAWS_UPDATEPERMISSIONGROUPREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class UpdatePermissionGroupRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT UpdatePermissionGroupRequest : public FinspaceDataRequest {

public:
    UpdatePermissionGroupRequest(const UpdatePermissionGroupRequest &other);
    UpdatePermissionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
