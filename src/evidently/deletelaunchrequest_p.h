// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHREQUEST_P_H
#define QTAWS_DELETELAUNCHREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "deletelaunchrequest.h"

namespace QtAws {
namespace Evidently {

class DeleteLaunchRequest;

class DeleteLaunchRequestPrivate : public EvidentlyRequestPrivate {

public:
    DeleteLaunchRequestPrivate(const EvidentlyRequest::Action action,
                                   DeleteLaunchRequest * const q);
    DeleteLaunchRequestPrivate(const DeleteLaunchRequestPrivate &other,
                                   DeleteLaunchRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
