// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERHIERARCHYGROUPSREQUEST_H
#define QTAWS_LISTUSERHIERARCHYGROUPSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListUserHierarchyGroupsRequestPrivate;

class QTAWSCONNECT_EXPORT ListUserHierarchyGroupsRequest : public ConnectRequest {

public:
    ListUserHierarchyGroupsRequest(const ListUserHierarchyGroupsRequest &other);
    ListUserHierarchyGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserHierarchyGroupsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
