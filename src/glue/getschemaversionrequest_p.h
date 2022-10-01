// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAVERSIONREQUEST_P_H
#define QTAWS_GETSCHEMAVERSIONREQUEST_P_H

#include "gluerequest_p.h"
#include "getschemaversionrequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaVersionRequest;

class GetSchemaVersionRequestPrivate : public GlueRequestPrivate {

public:
    GetSchemaVersionRequestPrivate(const GlueRequest::Action action,
                                   GetSchemaVersionRequest * const q);
    GetSchemaVersionRequestPrivate(const GetSchemaVersionRequestPrivate &other,
                                   GetSchemaVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSchemaVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
