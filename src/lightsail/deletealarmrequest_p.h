// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMREQUEST_P_H
#define QTAWS_DELETEALARMREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletealarmrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteAlarmRequest;

class DeleteAlarmRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteAlarmRequestPrivate(const LightsailRequest::Action action,
                                   DeleteAlarmRequest * const q);
    DeleteAlarmRequestPrivate(const DeleteAlarmRequestPrivate &other,
                                   DeleteAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAlarmRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
