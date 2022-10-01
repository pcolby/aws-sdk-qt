// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONREQUEST_P_H

#include "codedeployrequest_p.h"
#include "updateapplicationrequest.h"

namespace QtAws {
namespace CodeDeploy {

class UpdateApplicationRequest;

class UpdateApplicationRequestPrivate : public CodeDeployRequestPrivate {

public:
    UpdateApplicationRequestPrivate(const CodeDeployRequest::Action action,
                                   UpdateApplicationRequest * const q);
    UpdateApplicationRequestPrivate(const UpdateApplicationRequestPrivate &other,
                                   UpdateApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
