// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETMETADATAREQUEST_P_H
#define QTAWS_UPDATEFLEETMETADATAREQUEST_P_H

#include "worklinkrequest_p.h"
#include "updatefleetmetadatarequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateFleetMetadataRequest;

class UpdateFleetMetadataRequestPrivate : public WorkLinkRequestPrivate {

public:
    UpdateFleetMetadataRequestPrivate(const WorkLinkRequest::Action action,
                                   UpdateFleetMetadataRequest * const q);
    UpdateFleetMetadataRequestPrivate(const UpdateFleetMetadataRequestPrivate &other,
                                   UpdateFleetMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFleetMetadataRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
