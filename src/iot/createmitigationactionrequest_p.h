// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMITIGATIONACTIONREQUEST_P_H
#define QTAWS_CREATEMITIGATIONACTIONREQUEST_P_H

#include "iotrequest_p.h"
#include "createmitigationactionrequest.h"

namespace QtAws {
namespace IoT {

class CreateMitigationActionRequest;

class CreateMitigationActionRequestPrivate : public IoTRequestPrivate {

public:
    CreateMitigationActionRequestPrivate(const IoTRequest::Action action,
                                   CreateMitigationActionRequest * const q);
    CreateMitigationActionRequestPrivate(const CreateMitigationActionRequestPrivate &other,
                                   CreateMitigationActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMitigationActionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
