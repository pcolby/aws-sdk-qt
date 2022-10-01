// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONGROUPREQUEST_H
#define QTAWS_CREATEPERMISSIONGROUPREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class CreatePermissionGroupRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT CreatePermissionGroupRequest : public FinspaceDataRequest {

public:
    CreatePermissionGroupRequest(const CreatePermissionGroupRequest &other);
    CreatePermissionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
