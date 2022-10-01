// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERDEFINEDFUNCTIONREQUEST_P_H
#define QTAWS_UPDATEUSERDEFINEDFUNCTIONREQUEST_P_H

#include "gluerequest_p.h"
#include "updateuserdefinedfunctionrequest.h"

namespace QtAws {
namespace Glue {

class UpdateUserDefinedFunctionRequest;

class UpdateUserDefinedFunctionRequestPrivate : public GlueRequestPrivate {

public:
    UpdateUserDefinedFunctionRequestPrivate(const GlueRequest::Action action,
                                   UpdateUserDefinedFunctionRequest * const q);
    UpdateUserDefinedFunctionRequestPrivate(const UpdateUserDefinedFunctionRequestPrivate &other,
                                   UpdateUserDefinedFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserDefinedFunctionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
