// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTEVENTSCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "puteventsconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutEventsConfigurationRequest;

class PutEventsConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    PutEventsConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   PutEventsConfigurationRequest * const q);
    PutEventsConfigurationRequestPrivate(const PutEventsConfigurationRequestPrivate &other,
                                   PutEventsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEventsConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
