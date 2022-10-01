// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUDITSTREAMCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEAUDITSTREAMCONFIGURATIONREQUEST_P_H

#include "worklinkrequest_p.h"
#include "updateauditstreamconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateAuditStreamConfigurationRequest;

class UpdateAuditStreamConfigurationRequestPrivate : public WorkLinkRequestPrivate {

public:
    UpdateAuditStreamConfigurationRequestPrivate(const WorkLinkRequest::Action action,
                                   UpdateAuditStreamConfigurationRequest * const q);
    UpdateAuditStreamConfigurationRequestPrivate(const UpdateAuditStreamConfigurationRequestPrivate &other,
                                   UpdateAuditStreamConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAuditStreamConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
