// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEVERSIONREQUEST_P_H
#define QTAWS_GETTABLEVERSIONREQUEST_P_H

#include "gluerequest_p.h"
#include "gettableversionrequest.h"

namespace QtAws {
namespace Glue {

class GetTableVersionRequest;

class GetTableVersionRequestPrivate : public GlueRequestPrivate {

public:
    GetTableVersionRequestPrivate(const GlueRequest::Action action,
                                   GetTableVersionRequest * const q);
    GetTableVersionRequestPrivate(const GetTableVersionRequestPrivate &other,
                                   GetTableVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTableVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
