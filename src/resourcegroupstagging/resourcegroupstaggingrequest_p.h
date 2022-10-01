// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSTAGGINGREQUEST_P_H
#define QTAWS_RESOURCEGROUPSTAGGINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "resourcegroupstaggingrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class ResourceGroupsTaggingRequest;

class ResourceGroupsTaggingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ResourceGroupsTaggingRequest::Action action; ///< ResourceGroupsTagging action to be performed.
    QString apiVersion;        ///< ResourceGroupsTagging API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ResourceGroupsTagging request (query string) parameters. @todo?

    ResourceGroupsTaggingRequestPrivate(const ResourceGroupsTaggingRequest::Action action, ResourceGroupsTaggingRequest * const q);
    ResourceGroupsTaggingRequestPrivate(const ResourceGroupsTaggingRequestPrivate &other, ResourceGroupsTaggingRequest * const q);

    static QString toString(const ResourceGroupsTaggingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ResourceGroupsTaggingRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
