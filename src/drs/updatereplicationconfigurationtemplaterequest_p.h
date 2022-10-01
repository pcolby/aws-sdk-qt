// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H

#include "drsrequest_p.h"
#include "updatereplicationconfigurationtemplaterequest.h"

namespace QtAws {
namespace Drs {

class UpdateReplicationConfigurationTemplateRequest;

class UpdateReplicationConfigurationTemplateRequestPrivate : public DrsRequestPrivate {

public:
    UpdateReplicationConfigurationTemplateRequestPrivate(const DrsRequest::Action action,
                                   UpdateReplicationConfigurationTemplateRequest * const q);
    UpdateReplicationConfigurationTemplateRequestPrivate(const UpdateReplicationConfigurationTemplateRequestPrivate &other,
                                   UpdateReplicationConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationConfigurationTemplateRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
