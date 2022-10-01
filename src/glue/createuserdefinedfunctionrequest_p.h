// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERDEFINEDFUNCTIONREQUEST_P_H
#define QTAWS_CREATEUSERDEFINEDFUNCTIONREQUEST_P_H

#include "gluerequest_p.h"
#include "createuserdefinedfunctionrequest.h"

namespace QtAws {
namespace Glue {

class CreateUserDefinedFunctionRequest;

class CreateUserDefinedFunctionRequestPrivate : public GlueRequestPrivate {

public:
    CreateUserDefinedFunctionRequestPrivate(const GlueRequest::Action action,
                                   CreateUserDefinedFunctionRequest * const q);
    CreateUserDefinedFunctionRequestPrivate(const CreateUserDefinedFunctionRequestPrivate &other,
                                   CreateUserDefinedFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserDefinedFunctionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
