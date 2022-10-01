// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEMAREQUEST_P_H
#define QTAWS_CREATESCHEMAREQUEST_P_H

#include "gluerequest_p.h"
#include "createschemarequest.h"

namespace QtAws {
namespace Glue {

class CreateSchemaRequest;

class CreateSchemaRequestPrivate : public GlueRequestPrivate {

public:
    CreateSchemaRequestPrivate(const GlueRequest::Action action,
                                   CreateSchemaRequest * const q);
    CreateSchemaRequestPrivate(const CreateSchemaRequestPrivate &other,
                                   CreateSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSchemaRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
