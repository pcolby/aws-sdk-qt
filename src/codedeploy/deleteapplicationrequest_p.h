// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONREQUEST_P_H

#include "codedeployrequest_p.h"
#include "deleteapplicationrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteApplicationRequest;

class DeleteApplicationRequestPrivate : public CodeDeployRequestPrivate {

public:
    DeleteApplicationRequestPrivate(const CodeDeployRequest::Action action,
                                   DeleteApplicationRequest * const q);
    DeleteApplicationRequestPrivate(const DeleteApplicationRequestPrivate &other,
                                   DeleteApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
