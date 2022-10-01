// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETESECURITYCONFIGURATIONREQUEST_P_H

#include "gluerequest_p.h"
#include "deletesecurityconfigurationrequest.h"

namespace QtAws {
namespace Glue {

class DeleteSecurityConfigurationRequest;

class DeleteSecurityConfigurationRequestPrivate : public GlueRequestPrivate {

public:
    DeleteSecurityConfigurationRequestPrivate(const GlueRequest::Action action,
                                   DeleteSecurityConfigurationRequest * const q);
    DeleteSecurityConfigurationRequestPrivate(const DeleteSecurityConfigurationRequestPrivate &other,
                                   DeleteSecurityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSecurityConfigurationRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
