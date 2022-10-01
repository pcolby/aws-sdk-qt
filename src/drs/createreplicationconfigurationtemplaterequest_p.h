// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H

#include "drsrequest_p.h"
#include "createreplicationconfigurationtemplaterequest.h"

namespace QtAws {
namespace Drs {

class CreateReplicationConfigurationTemplateRequest;

class CreateReplicationConfigurationTemplateRequestPrivate : public DrsRequestPrivate {

public:
    CreateReplicationConfigurationTemplateRequestPrivate(const DrsRequest::Action action,
                                   CreateReplicationConfigurationTemplateRequest * const q);
    CreateReplicationConfigurationTemplateRequestPrivate(const CreateReplicationConfigurationTemplateRequestPrivate &other,
                                   CreateReplicationConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplicationConfigurationTemplateRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
