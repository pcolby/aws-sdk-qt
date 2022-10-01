// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGREQUEST_H
#define QTAWS_UNTAGREQUEST_H

#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class UntagRequestPrivate;

class QTAWSRESOURCEGROUPS_EXPORT UntagRequest : public ResourceGroupsRequest {

public:
    UntagRequest(const UntagRequest &other);
    UntagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
