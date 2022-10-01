// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEEVENTSCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "deleteeventsconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteEventsConfigurationRequest;

class DeleteEventsConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteEventsConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   DeleteEventsConfigurationRequest * const q);
    DeleteEventsConfigurationRequestPrivate(const DeleteEventsConfigurationRequestPrivate &other,
                                   DeleteEventsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventsConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
