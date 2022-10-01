// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESESSIONREQUEST_P_H
#define QTAWS_CREATESESSIONREQUEST_P_H

#include "gluerequest_p.h"
#include "createsessionrequest.h"

namespace QtAws {
namespace Glue {

class CreateSessionRequest;

class CreateSessionRequestPrivate : public GlueRequestPrivate {

public:
    CreateSessionRequestPrivate(const GlueRequest::Action action,
                                   CreateSessionRequest * const q);
    CreateSessionRequestPrivate(const CreateSessionRequestPrivate &other,
                                   CreateSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSessionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
