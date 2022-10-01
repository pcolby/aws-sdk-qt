// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSBYPERMISSIONGROUPREQUEST_H
#define QTAWS_LISTUSERSBYPERMISSIONGROUPREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class ListUsersByPermissionGroupRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT ListUsersByPermissionGroupRequest : public FinspaceDataRequest {

public:
    ListUsersByPermissionGroupRequest(const ListUsersByPermissionGroupRequest &other);
    ListUsersByPermissionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsersByPermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
