// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERDEFINEDFUNCTIONREQUEST_P_H
#define QTAWS_DELETEUSERDEFINEDFUNCTIONREQUEST_P_H

#include "gluerequest_p.h"
#include "deleteuserdefinedfunctionrequest.h"

namespace QtAws {
namespace Glue {

class DeleteUserDefinedFunctionRequest;

class DeleteUserDefinedFunctionRequestPrivate : public GlueRequestPrivate {

public:
    DeleteUserDefinedFunctionRequestPrivate(const GlueRequest::Action action,
                                   DeleteUserDefinedFunctionRequest * const q);
    DeleteUserDefinedFunctionRequestPrivate(const DeleteUserDefinedFunctionRequestPrivate &other,
                                   DeleteUserDefinedFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserDefinedFunctionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
