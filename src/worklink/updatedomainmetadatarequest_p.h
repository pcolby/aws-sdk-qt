// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINMETADATAREQUEST_P_H
#define QTAWS_UPDATEDOMAINMETADATAREQUEST_P_H

#include "worklinkrequest_p.h"
#include "updatedomainmetadatarequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateDomainMetadataRequest;

class UpdateDomainMetadataRequestPrivate : public WorkLinkRequestPrivate {

public:
    UpdateDomainMetadataRequestPrivate(const WorkLinkRequest::Action action,
                                   UpdateDomainMetadataRequest * const q);
    UpdateDomainMetadataRequestPrivate(const UpdateDomainMetadataRequestPrivate &other,
                                   UpdateDomainMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainMetadataRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
