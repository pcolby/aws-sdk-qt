// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAVERSIONSDIFFREQUEST_P_H
#define QTAWS_GETSCHEMAVERSIONSDIFFREQUEST_P_H

#include "gluerequest_p.h"
#include "getschemaversionsdiffrequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaVersionsDiffRequest;

class GetSchemaVersionsDiffRequestPrivate : public GlueRequestPrivate {

public:
    GetSchemaVersionsDiffRequestPrivate(const GlueRequest::Action action,
                                   GetSchemaVersionsDiffRequest * const q);
    GetSchemaVersionsDiffRequestPrivate(const GetSchemaVersionsDiffRequestPrivate &other,
                                   GetSchemaVersionsDiffRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSchemaVersionsDiffRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
