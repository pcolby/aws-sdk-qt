// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCRIPTREQUEST_P_H
#define QTAWS_CREATESCRIPTREQUEST_P_H

#include "gluerequest_p.h"
#include "createscriptrequest.h"

namespace QtAws {
namespace Glue {

class CreateScriptRequest;

class CreateScriptRequestPrivate : public GlueRequestPrivate {

public:
    CreateScriptRequestPrivate(const GlueRequest::Action action,
                                   CreateScriptRequest * const q);
    CreateScriptRequestPrivate(const CreateScriptRequestPrivate &other,
                                   CreateScriptRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateScriptRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
