// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPHONENUMBERREQUEST_P_H
#define QTAWS_DELETEPHONENUMBERREQUEST_P_H

#include "chimerequest_p.h"
#include "deletephonenumberrequest.h"

namespace QtAws {
namespace Chime {

class DeletePhoneNumberRequest;

class DeletePhoneNumberRequestPrivate : public ChimeRequestPrivate {

public:
    DeletePhoneNumberRequestPrivate(const ChimeRequest::Action action,
                                   DeletePhoneNumberRequest * const q);
    DeletePhoneNumberRequestPrivate(const DeletePhoneNumberRequestPrivate &other,
                                   DeletePhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePhoneNumberRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
