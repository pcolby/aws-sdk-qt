// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGREQUEST_H
#define QTAWS_TAGREQUEST_H

#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class TagRequestPrivate;

class QTAWSRESOURCEGROUPS_EXPORT TagRequest : public ResourceGroupsRequest {

public:
    TagRequest(const TagRequest &other);
    TagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
