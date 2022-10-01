// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERDEFINEDFUNCTIONREQUEST_P_H
#define QTAWS_GETUSERDEFINEDFUNCTIONREQUEST_P_H

#include "gluerequest_p.h"
#include "getuserdefinedfunctionrequest.h"

namespace QtAws {
namespace Glue {

class GetUserDefinedFunctionRequest;

class GetUserDefinedFunctionRequestPrivate : public GlueRequestPrivate {

public:
    GetUserDefinedFunctionRequestPrivate(const GlueRequest::Action action,
                                   GetUserDefinedFunctionRequest * const q);
    GetUserDefinedFunctionRequestPrivate(const GetUserDefinedFunctionRequestPrivate &other,
                                   GetUserDefinedFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserDefinedFunctionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
