// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_P_H

#include "drsrequest_p.h"
#include "deletereplicationconfigurationtemplaterequest.h"

namespace QtAws {
namespace Drs {

class DeleteReplicationConfigurationTemplateRequest;

class DeleteReplicationConfigurationTemplateRequestPrivate : public DrsRequestPrivate {

public:
    DeleteReplicationConfigurationTemplateRequestPrivate(const DrsRequest::Action action,
                                   DeleteReplicationConfigurationTemplateRequest * const q);
    DeleteReplicationConfigurationTemplateRequestPrivate(const DeleteReplicationConfigurationTemplateRequestPrivate &other,
                                   DeleteReplicationConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationConfigurationTemplateRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
