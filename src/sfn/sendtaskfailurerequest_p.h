// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKFAILUREREQUEST_P_H
#define QTAWS_SENDTASKFAILUREREQUEST_P_H

#include "sfnrequest_p.h"
#include "sendtaskfailurerequest.h"

namespace QtAws {
namespace Sfn {

class SendTaskFailureRequest;

class SendTaskFailureRequestPrivate : public SfnRequestPrivate {

public:
    SendTaskFailureRequestPrivate(const SfnRequest::Action action,
                                   SendTaskFailureRequest * const q);
    SendTaskFailureRequestPrivate(const SendTaskFailureRequestPrivate &other,
                                   SendTaskFailureRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendTaskFailureRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
