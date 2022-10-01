// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTSOURCESCONFIGREQUEST_P_H
#define QTAWS_UPDATEEVENTSOURCESCONFIGREQUEST_P_H

#include "devopsgururequest_p.h"
#include "updateeventsourcesconfigrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateEventSourcesConfigRequest;

class UpdateEventSourcesConfigRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    UpdateEventSourcesConfigRequestPrivate(const DevOpsGuruRequest::Action action,
                                   UpdateEventSourcesConfigRequest * const q);
    UpdateEventSourcesConfigRequestPrivate(const UpdateEventSourcesConfigRequestPrivate &other,
                                   UpdateEventSourcesConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEventSourcesConfigRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
