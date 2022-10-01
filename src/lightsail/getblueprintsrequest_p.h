// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTSREQUEST_P_H
#define QTAWS_GETBLUEPRINTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getblueprintsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBlueprintsRequest;

class GetBlueprintsRequestPrivate : public LightsailRequestPrivate {

public:
    GetBlueprintsRequestPrivate(const LightsailRequest::Action action,
                                   GetBlueprintsRequest * const q);
    GetBlueprintsRequestPrivate(const GetBlueprintsRequestPrivate &other,
                                   GetBlueprintsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBlueprintsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
