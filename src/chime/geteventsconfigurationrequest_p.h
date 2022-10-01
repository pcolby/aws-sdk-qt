// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSCONFIGURATIONREQUEST_P_H
#define QTAWS_GETEVENTSCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "geteventsconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetEventsConfigurationRequest;

class GetEventsConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    GetEventsConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   GetEventsConfigurationRequest * const q);
    GetEventsConfigurationRequestPrivate(const GetEventsConfigurationRequestPrivate &other,
                                   GetEventsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventsConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
