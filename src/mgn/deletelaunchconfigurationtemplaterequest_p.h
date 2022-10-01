// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHCONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_DELETELAUNCHCONFIGURATIONTEMPLATEREQUEST_P_H

#include "mgnrequest_p.h"
#include "deletelaunchconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class DeleteLaunchConfigurationTemplateRequest;

class DeleteLaunchConfigurationTemplateRequestPrivate : public MgnRequestPrivate {

public:
    DeleteLaunchConfigurationTemplateRequestPrivate(const MgnRequest::Action action,
                                   DeleteLaunchConfigurationTemplateRequest * const q);
    DeleteLaunchConfigurationTemplateRequestPrivate(const DeleteLaunchConfigurationTemplateRequestPrivate &other,
                                   DeleteLaunchConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
