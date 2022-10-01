// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTRUNSREQUEST_P_H
#define QTAWS_GETBLUEPRINTRUNSREQUEST_P_H

#include "gluerequest_p.h"
#include "getblueprintrunsrequest.h"

namespace QtAws {
namespace Glue {

class GetBlueprintRunsRequest;

class GetBlueprintRunsRequestPrivate : public GlueRequestPrivate {

public:
    GetBlueprintRunsRequestPrivate(const GlueRequest::Action action,
                                   GetBlueprintRunsRequest * const q);
    GetBlueprintRunsRequestPrivate(const GetBlueprintRunsRequestPrivate &other,
                                   GetBlueprintRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBlueprintRunsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
