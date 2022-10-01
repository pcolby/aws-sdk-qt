// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOLIFECYCLECONFIGREQUEST_P_H
#define QTAWS_DELETESTUDIOLIFECYCLECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletestudiolifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteStudioLifecycleConfigRequest;

class DeleteStudioLifecycleConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteStudioLifecycleConfigRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteStudioLifecycleConfigRequest * const q);
    DeleteStudioLifecycleConfigRequestPrivate(const DeleteStudioLifecycleConfigRequestPrivate &other,
                                   DeleteStudioLifecycleConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStudioLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
