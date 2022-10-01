// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFAILBACKLAUNCHREQUEST_P_H
#define QTAWS_STARTFAILBACKLAUNCHREQUEST_P_H

#include "drsrequest_p.h"
#include "startfailbacklaunchrequest.h"

namespace QtAws {
namespace Drs {

class StartFailbackLaunchRequest;

class StartFailbackLaunchRequestPrivate : public DrsRequestPrivate {

public:
    StartFailbackLaunchRequestPrivate(const DrsRequest::Action action,
                                   StartFailbackLaunchRequest * const q);
    StartFailbackLaunchRequestPrivate(const StartFailbackLaunchRequestPrivate &other,
                                   StartFailbackLaunchRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFailbackLaunchRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
