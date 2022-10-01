// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONNECTIONREQUEST_P_H
#define QTAWS_STARTCONNECTIONREQUEST_P_H

#include "outpostsrequest_p.h"
#include "startconnectionrequest.h"

namespace QtAws {
namespace Outposts {

class StartConnectionRequest;

class StartConnectionRequestPrivate : public OutpostsRequestPrivate {

public:
    StartConnectionRequestPrivate(const OutpostsRequest::Action action,
                                   StartConnectionRequest * const q);
    StartConnectionRequestPrivate(const StartConnectionRequestPrivate &other,
                                   StartConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartConnectionRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
