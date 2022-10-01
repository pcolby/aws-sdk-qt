// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAREQUEST_P_H
#define QTAWS_GETSCHEMAREQUEST_P_H

#include "gluerequest_p.h"
#include "getschemarequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaRequest;

class GetSchemaRequestPrivate : public GlueRequestPrivate {

public:
    GetSchemaRequestPrivate(const GlueRequest::Action action,
                                   GetSchemaRequest * const q);
    GetSchemaRequestPrivate(const GetSchemaRequestPrivate &other,
                                   GetSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSchemaRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
