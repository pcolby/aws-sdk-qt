// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H

#include "mgnrequest_p.h"
#include "deletereplicationconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class DeleteReplicationConfigurationTemplateRequest;

class DeleteReplicationConfigurationTemplateRequestPrivate : public MgnRequestPrivate {

public:
    DeleteReplicationConfigurationTemplateRequestPrivate(const MgnRequest::Action action,
                                   DeleteReplicationConfigurationTemplateRequest * const q);
    DeleteReplicationConfigurationTemplateRequestPrivate(const DeleteReplicationConfigurationTemplateRequestPrivate &other,
                                   DeleteReplicationConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
