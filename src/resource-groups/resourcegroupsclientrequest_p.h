/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_RESOURCEGROUPSCLIENTREQUEST_P_H
#define QTAWS_RESOURCEGROUPSCLIENTREQUEST_P_H

#include "resourcegroups_p.h"
#include "request.h"

namespace AWS {

namespace ResourceGroups {

class ResourceGroupsClientRequest;

class QTAWS_EXPORT ResourceGroupsClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    ResourceGroupsClientRequest::Action action; ///< ResourceGroups action to be performed.
    QString apiVersion;        ///< ResourceGroups API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ResourceGroups request (query string) parameters. @todo?

    ResourceGroupsClientRequestPrivate(const ResourceGroupsClientRequest::Action action, ResourceGroupsClientRequest * const q);
    ResourceGroupsClientRequestPrivate(const RequestPrivate &other, ResourceGroupsClientRequest * const q);

    static QString toString(const ResourceGroupsClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ResourceGroupsClientRequest)

};

} // namespace ResourceGroups
} // namespace AWS

#endif
