// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPLICATIONREQUEST_P_H
#define QTAWS_STARTAPPLICATIONREQUEST_P_H

#include "emrserverlessrequest_p.h"
#include "startapplicationrequest.h"

namespace QtAws {
namespace EmrServerless {

class StartApplicationRequest;

class StartApplicationRequestPrivate : public EmrServerlessRequestPrivate {

public:
    StartApplicationRequestPrivate(const EmrServerlessRequest::Action action,
                                   StartApplicationRequest * const q);
    StartApplicationRequestPrivate(const StartApplicationRequestPrivate &other,
                                   StartApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartApplicationRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
