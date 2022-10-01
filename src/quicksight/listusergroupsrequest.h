// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERGROUPSREQUEST_H
#define QTAWS_LISTUSERGROUPSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListUserGroupsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListUserGroupsRequest : public QuickSightRequest {

public:
    ListUserGroupsRequest(const ListUserGroupsRequest &other);
    ListUserGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserGroupsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
