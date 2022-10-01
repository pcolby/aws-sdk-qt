// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTEMPLATEDEMAILREQUEST_P_H
#define QTAWS_SENDTEMPLATEDEMAILREQUEST_P_H

#include "sesrequest_p.h"
#include "sendtemplatedemailrequest.h"

namespace QtAws {
namespace Ses {

class SendTemplatedEmailRequest;

class SendTemplatedEmailRequestPrivate : public SesRequestPrivate {

public:
    SendTemplatedEmailRequestPrivate(const SesRequest::Action action,
                                   SendTemplatedEmailRequest * const q);
    SendTemplatedEmailRequestPrivate(const SendTemplatedEmailRequestPrivate &other,
                                   SendTemplatedEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendTemplatedEmailRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
