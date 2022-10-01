// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSESSIONREQUEST_P_H
#define QTAWS_STOPSESSIONREQUEST_P_H

#include "gluerequest_p.h"
#include "stopsessionrequest.h"

namespace QtAws {
namespace Glue {

class StopSessionRequest;

class StopSessionRequestPrivate : public GlueRequestPrivate {

public:
    StopSessionRequestPrivate(const GlueRequest::Action action,
                                   StopSessionRequest * const q);
    StopSessionRequestPrivate(const StopSessionRequestPrivate &other,
                                   StopSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopSessionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
