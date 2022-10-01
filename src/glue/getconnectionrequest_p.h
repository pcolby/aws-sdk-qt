// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONREQUEST_P_H
#define QTAWS_GETCONNECTIONREQUEST_P_H

#include "gluerequest_p.h"
#include "getconnectionrequest.h"

namespace QtAws {
namespace Glue {

class GetConnectionRequest;

class GetConnectionRequestPrivate : public GlueRequestPrivate {

public:
    GetConnectionRequestPrivate(const GlueRequest::Action action,
                                   GetConnectionRequest * const q);
    GetConnectionRequestPrivate(const GetConnectionRequestPrivate &other,
                                   GetConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
