// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSRESPONSE_H
#define QTAWS_RESOURCEGROUPSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsresourcegroupsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ResourceGroups {

class ResourceGroupsResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT ResourceGroupsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ResourceGroupsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ResourceGroupsResponse(ResourceGroupsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResourceGroupsResponse)
    Q_DISABLE_COPY(ResourceGroupsResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
