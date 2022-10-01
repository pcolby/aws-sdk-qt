// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETESECURITYCONFIGURATIONREQUEST_P_H

#include "emrrequest_p.h"
#include "deletesecurityconfigurationrequest.h"

namespace QtAws {
namespace Emr {

class DeleteSecurityConfigurationRequest;

class DeleteSecurityConfigurationRequestPrivate : public EmrRequestPrivate {

public:
    DeleteSecurityConfigurationRequestPrivate(const EmrRequest::Action action,
                                   DeleteSecurityConfigurationRequest * const q);
    DeleteSecurityConfigurationRequestPrivate(const DeleteSecurityConfigurationRequestPrivate &other,
                                   DeleteSecurityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSecurityConfigurationRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
