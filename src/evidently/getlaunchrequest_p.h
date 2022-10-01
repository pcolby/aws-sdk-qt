// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHREQUEST_P_H
#define QTAWS_GETLAUNCHREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "getlaunchrequest.h"

namespace QtAws {
namespace Evidently {

class GetLaunchRequest;

class GetLaunchRequestPrivate : public EvidentlyRequestPrivate {

public:
    GetLaunchRequestPrivate(const EvidentlyRequest::Action action,
                                   GetLaunchRequest * const q);
    GetLaunchRequestPrivate(const GetLaunchRequestPrivate &other,
                                   GetLaunchRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
