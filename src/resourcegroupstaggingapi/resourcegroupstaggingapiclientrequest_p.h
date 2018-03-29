/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_RESOURCEGROUPSTAGGINGAPICLIENTREQUEST_P_H
#define QTAWS_RESOURCEGROUPSTAGGINGAPICLIENTREQUEST_P_H

#include "resourcegroupstaggingapi_p.h"
#include "resourcegroupstaggingapiclientrequest.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

class ResourceGroupsTaggingAPIClientRequest;

class QTAWS_EXPORT ResourceGroupsTaggingAPIClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    ResourceGroupsTaggingAPIClientRequest::Action action; ///< ResourceGroupsTaggingAPI action to be performed.
    QString apiVersion;        ///< ResourceGroupsTaggingAPI API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ResourceGroupsTaggingAPI request (query string) parameters. @todo?

    ResourceGroupsTaggingAPIClientRequestPrivate(const ResourceGroupsTaggingAPIClientRequest::Action action, ResourceGroupsTaggingAPIClientRequest * const q);
    ResourceGroupsTaggingAPIClientRequestPrivate(const ResourceGroupsTaggingAPIClientRequestPrivate &other, ResourceGroupsTaggingAPIClientRequest * const q);

    static QString toString(const ResourceGroupsTaggingAPIClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ResourceGroupsTaggingAPIClientRequest)

};

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws

#endif
