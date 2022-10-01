// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GROUPRESOURCESREQUEST_H
#define QTAWS_GROUPRESOURCESREQUEST_H

#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class GroupResourcesRequestPrivate;

class QTAWSRESOURCEGROUPS_EXPORT GroupResourcesRequest : public ResourceGroupsRequest {

public:
    GroupResourcesRequest(const GroupResourcesRequest &other);
    GroupResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GroupResourcesRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
