// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRATIONCODEREQUEST_P_H
#define QTAWS_DELETEREGISTRATIONCODEREQUEST_P_H

#include "iotrequest_p.h"
#include "deleteregistrationcoderequest.h"

namespace QtAws {
namespace IoT {

class DeleteRegistrationCodeRequest;

class DeleteRegistrationCodeRequestPrivate : public IoTRequestPrivate {

public:
    DeleteRegistrationCodeRequestPrivate(const IoTRequest::Action action,
                                   DeleteRegistrationCodeRequest * const q);
    DeleteRegistrationCodeRequestPrivate(const DeleteRegistrationCodeRequestPrivate &other,
                                   DeleteRegistrationCodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRegistrationCodeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
