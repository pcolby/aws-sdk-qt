// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMITIGATIONACTIONREQUEST_P_H
#define QTAWS_UPDATEMITIGATIONACTIONREQUEST_P_H

#include "iotrequest_p.h"
#include "updatemitigationactionrequest.h"

namespace QtAws {
namespace IoT {

class UpdateMitigationActionRequest;

class UpdateMitigationActionRequestPrivate : public IoTRequestPrivate {

public:
    UpdateMitigationActionRequestPrivate(const IoTRequest::Action action,
                                   UpdateMitigationActionRequest * const q);
    UpdateMitigationActionRequestPrivate(const UpdateMitigationActionRequestPrivate &other,
                                   UpdateMitigationActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMitigationActionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
