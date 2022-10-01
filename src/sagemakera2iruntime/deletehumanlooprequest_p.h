// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHUMANLOOPREQUEST_P_H
#define QTAWS_DELETEHUMANLOOPREQUEST_P_H

#include "sagemakera2iruntimerequest_p.h"
#include "deletehumanlooprequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class DeleteHumanLoopRequest;

class DeleteHumanLoopRequestPrivate : public SageMakerA2IRuntimeRequestPrivate {

public:
    DeleteHumanLoopRequestPrivate(const SageMakerA2IRuntimeRequest::Action action,
                                   DeleteHumanLoopRequest * const q);
    DeleteHumanLoopRequestPrivate(const DeleteHumanLoopRequestPrivate &other,
                                   DeleteHumanLoopRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHumanLoopRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
