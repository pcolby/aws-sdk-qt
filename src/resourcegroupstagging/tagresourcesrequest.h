// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCESREQUEST_H
#define QTAWS_TAGRESOURCESREQUEST_H

#include "resourcegroupstaggingrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class TagResourcesRequestPrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT TagResourcesRequest : public ResourceGroupsTaggingRequest {

public:
    TagResourcesRequest(const TagResourcesRequest &other);
    TagResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagResourcesRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
