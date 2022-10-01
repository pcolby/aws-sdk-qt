// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMREQUEST_P_H
#define QTAWS_STOPSTREAMREQUEST_P_H

#include "ivsrequest_p.h"
#include "stopstreamrequest.h"

namespace QtAws {
namespace Ivs {

class StopStreamRequest;

class StopStreamRequestPrivate : public IvsRequestPrivate {

public:
    StopStreamRequestPrivate(const IvsRequest::Action action,
                                   StopStreamRequest * const q);
    StopStreamRequestPrivate(const StopStreamRequestPrivate &other,
                                   StopStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopStreamRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
