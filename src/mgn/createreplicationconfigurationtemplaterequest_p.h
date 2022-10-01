// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H

#include "mgnrequest_p.h"
#include "createreplicationconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class CreateReplicationConfigurationTemplateRequest;

class CreateReplicationConfigurationTemplateRequestPrivate : public MgnRequestPrivate {

public:
    CreateReplicationConfigurationTemplateRequestPrivate(const MgnRequest::Action action,
                                   CreateReplicationConfigurationTemplateRequest * const q);
    CreateReplicationConfigurationTemplateRequestPrivate(const CreateReplicationConfigurationTemplateRequestPrivate &other,
                                   CreateReplicationConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplicationConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
