// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPRESOURCESREQUEST_H
#define QTAWS_LISTGROUPRESOURCESREQUEST_H

#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class ListGroupResourcesRequestPrivate;

class QTAWSRESOURCEGROUPS_EXPORT ListGroupResourcesRequest : public ResourceGroupsRequest {

public:
    ListGroupResourcesRequest(const ListGroupResourcesRequest &other);
    ListGroupResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupResourcesRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
