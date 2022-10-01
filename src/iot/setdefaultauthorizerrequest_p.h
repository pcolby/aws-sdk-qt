// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTAUTHORIZERREQUEST_P_H
#define QTAWS_SETDEFAULTAUTHORIZERREQUEST_P_H

#include "iotrequest_p.h"
#include "setdefaultauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class SetDefaultAuthorizerRequest;

class SetDefaultAuthorizerRequestPrivate : public IoTRequestPrivate {

public:
    SetDefaultAuthorizerRequestPrivate(const IoTRequest::Action action,
                                   SetDefaultAuthorizerRequest * const q);
    SetDefaultAuthorizerRequestPrivate(const SetDefaultAuthorizerRequestPrivate &other,
                                   SetDefaultAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetDefaultAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
