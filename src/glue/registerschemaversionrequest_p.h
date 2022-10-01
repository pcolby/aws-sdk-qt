// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSCHEMAVERSIONREQUEST_P_H
#define QTAWS_REGISTERSCHEMAVERSIONREQUEST_P_H

#include "gluerequest_p.h"
#include "registerschemaversionrequest.h"

namespace QtAws {
namespace Glue {

class RegisterSchemaVersionRequest;

class RegisterSchemaVersionRequestPrivate : public GlueRequestPrivate {

public:
    RegisterSchemaVersionRequestPrivate(const GlueRequest::Action action,
                                   RegisterSchemaVersionRequest * const q);
    RegisterSchemaVersionRequestPrivate(const RegisterSchemaVersionRequestPrivate &other,
                                   RegisterSchemaVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterSchemaVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
