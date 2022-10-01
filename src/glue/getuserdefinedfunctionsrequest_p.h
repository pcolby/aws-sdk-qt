// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERDEFINEDFUNCTIONSREQUEST_P_H
#define QTAWS_GETUSERDEFINEDFUNCTIONSREQUEST_P_H

#include "gluerequest_p.h"
#include "getuserdefinedfunctionsrequest.h"

namespace QtAws {
namespace Glue {

class GetUserDefinedFunctionsRequest;

class GetUserDefinedFunctionsRequestPrivate : public GlueRequestPrivate {

public:
    GetUserDefinedFunctionsRequestPrivate(const GlueRequest::Action action,
                                   GetUserDefinedFunctionsRequest * const q);
    GetUserDefinedFunctionsRequestPrivate(const GetUserDefinedFunctionsRequestPrivate &other,
                                   GetUserDefinedFunctionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserDefinedFunctionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
