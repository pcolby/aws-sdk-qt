// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSREQUEST_P_H
#define QTAWS_RESOURCEGROUPSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class ResourceGroupsRequest;

class ResourceGroupsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ResourceGroupsRequest::Action action; ///< ResourceGroups action to be performed.
    QString apiVersion;        ///< ResourceGroups API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ResourceGroups request (query string) parameters. @todo?

    ResourceGroupsRequestPrivate(const ResourceGroupsRequest::Action action, ResourceGroupsRequest * const q);
    ResourceGroupsRequestPrivate(const ResourceGroupsRequestPrivate &other, ResourceGroupsRequest * const q);

    static QString toString(const ResourceGroupsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ResourceGroupsRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
