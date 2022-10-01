// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBLUEPRINTRUNREQUEST_P_H
#define QTAWS_STARTBLUEPRINTRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "startblueprintrunrequest.h"

namespace QtAws {
namespace Glue {

class StartBlueprintRunRequest;

class StartBlueprintRunRequestPrivate : public GlueRequestPrivate {

public:
    StartBlueprintRunRequestPrivate(const GlueRequest::Action action,
                                   StartBlueprintRunRequest * const q);
    StartBlueprintRunRequestPrivate(const StartBlueprintRunRequestPrivate &other,
                                   StartBlueprintRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBlueprintRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
