// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONGROUPREQUEST_H
#define QTAWS_GETPERMISSIONGROUPREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class GetPermissionGroupRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT GetPermissionGroupRequest : public FinspaceDataRequest {

public:
    GetPermissionGroupRequest(const GetPermissionGroupRequest &other);
    GetPermissionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
