// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H

#include "mgnrequest_p.h"
#include "updatereplicationconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class UpdateReplicationConfigurationTemplateRequest;

class UpdateReplicationConfigurationTemplateRequestPrivate : public MgnRequestPrivate {

public:
    UpdateReplicationConfigurationTemplateRequestPrivate(const MgnRequest::Action action,
                                   UpdateReplicationConfigurationTemplateRequest * const q);
    UpdateReplicationConfigurationTemplateRequestPrivate(const UpdateReplicationConfigurationTemplateRequestPrivate &other,
                                   UpdateReplicationConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
