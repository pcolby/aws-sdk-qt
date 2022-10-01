// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONGROUPREQUEST_H
#define QTAWS_DELETEPERMISSIONGROUPREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class DeletePermissionGroupRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT DeletePermissionGroupRequest : public FinspaceDataRequest {

public:
    DeletePermissionGroupRequest(const DeletePermissionGroupRequest &other);
    DeletePermissionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
