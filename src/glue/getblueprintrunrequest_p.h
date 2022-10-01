// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTRUNREQUEST_P_H
#define QTAWS_GETBLUEPRINTRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "getblueprintrunrequest.h"

namespace QtAws {
namespace Glue {

class GetBlueprintRunRequest;

class GetBlueprintRunRequestPrivate : public GlueRequestPrivate {

public:
    GetBlueprintRunRequestPrivate(const GlueRequest::Action action,
                                   GetBlueprintRunRequest * const q);
    GetBlueprintRunRequestPrivate(const GetBlueprintRunRequestPrivate &other,
                                   GetBlueprintRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBlueprintRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
