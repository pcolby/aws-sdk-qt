// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTREQUEST_P_H
#define QTAWS_GETBLUEPRINTREQUEST_P_H

#include "gluerequest_p.h"
#include "getblueprintrequest.h"

namespace QtAws {
namespace Glue {

class GetBlueprintRequest;

class GetBlueprintRequestPrivate : public GlueRequestPrivate {

public:
    GetBlueprintRequestPrivate(const GlueRequest::Action action,
                                   GetBlueprintRequest * const q);
    GetBlueprintRequestPrivate(const GetBlueprintRequestPrivate &other,
                                   GetBlueprintRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBlueprintRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
