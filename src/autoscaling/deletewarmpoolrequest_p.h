// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWARMPOOLREQUEST_P_H
#define QTAWS_DELETEWARMPOOLREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "deletewarmpoolrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteWarmPoolRequest;

class DeleteWarmPoolRequestPrivate : public AutoScalingRequestPrivate {

public:
    DeleteWarmPoolRequestPrivate(const AutoScalingRequest::Action action,
                                   DeleteWarmPoolRequest * const q);
    DeleteWarmPoolRequestPrivate(const DeleteWarmPoolRequestPrivate &other,
                                   DeleteWarmPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWarmPoolRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
