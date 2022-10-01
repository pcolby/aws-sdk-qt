// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHREQUEST_P_H
#define QTAWS_UPDATELAUNCHREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "updatelaunchrequest.h"

namespace QtAws {
namespace Evidently {

class UpdateLaunchRequest;

class UpdateLaunchRequestPrivate : public EvidentlyRequestPrivate {

public:
    UpdateLaunchRequestPrivate(const EvidentlyRequest::Action action,
                                   UpdateLaunchRequest * const q);
    UpdateLaunchRequestPrivate(const UpdateLaunchRequestPrivate &other,
                                   UpdateLaunchRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
