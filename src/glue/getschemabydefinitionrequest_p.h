// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMABYDEFINITIONREQUEST_P_H
#define QTAWS_GETSCHEMABYDEFINITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "getschemabydefinitionrequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaByDefinitionRequest;

class GetSchemaByDefinitionRequestPrivate : public GlueRequestPrivate {

public:
    GetSchemaByDefinitionRequestPrivate(const GlueRequest::Action action,
                                   GetSchemaByDefinitionRequest * const q);
    GetSchemaByDefinitionRequestPrivate(const GetSchemaByDefinitionRequestPrivate &other,
                                   GetSchemaByDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSchemaByDefinitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
