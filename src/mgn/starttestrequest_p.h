// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTESTREQUEST_P_H
#define QTAWS_STARTTESTREQUEST_P_H

#include "mgnrequest_p.h"
#include "starttestrequest.h"

namespace QtAws {
namespace Mgn {

class StartTestRequest;

class StartTestRequestPrivate : public MgnRequestPrivate {

public:
    StartTestRequestPrivate(const MgnRequest::Action action,
                                   StartTestRequest * const q);
    StartTestRequestPrivate(const StartTestRequestPrivate &other,
                                   StartTestRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTestRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
