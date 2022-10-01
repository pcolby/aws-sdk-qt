// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCESREQUEST_H
#define QTAWS_UNTAGRESOURCESREQUEST_H

#include "resourcegroupstaggingrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class UntagResourcesRequestPrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT UntagResourcesRequest : public ResourceGroupsTaggingRequest {

public:
    UntagResourcesRequest(const UntagResourcesRequest &other);
    UntagResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagResourcesRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
