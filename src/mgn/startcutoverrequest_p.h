// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCUTOVERREQUEST_P_H
#define QTAWS_STARTCUTOVERREQUEST_P_H

#include "mgnrequest_p.h"
#include "startcutoverrequest.h"

namespace QtAws {
namespace Mgn {

class StartCutoverRequest;

class StartCutoverRequestPrivate : public MgnRequestPrivate {

public:
    StartCutoverRequestPrivate(const MgnRequest::Action action,
                                   StartCutoverRequest * const q);
    StartCutoverRequestPrivate(const StartCutoverRequestPrivate &other,
                                   StartCutoverRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartCutoverRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
