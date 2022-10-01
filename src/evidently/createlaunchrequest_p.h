// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHREQUEST_P_H
#define QTAWS_CREATELAUNCHREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "createlaunchrequest.h"

namespace QtAws {
namespace Evidently {

class CreateLaunchRequest;

class CreateLaunchRequestPrivate : public EvidentlyRequestPrivate {

public:
    CreateLaunchRequestPrivate(const EvidentlyRequest::Action action,
                                   CreateLaunchRequest * const q);
    CreateLaunchRequestPrivate(const CreateLaunchRequestPrivate &other,
                                   CreateLaunchRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
