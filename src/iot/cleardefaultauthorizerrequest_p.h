// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLEARDEFAULTAUTHORIZERREQUEST_P_H
#define QTAWS_CLEARDEFAULTAUTHORIZERREQUEST_P_H

#include "iotrequest_p.h"
#include "cleardefaultauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class ClearDefaultAuthorizerRequest;

class ClearDefaultAuthorizerRequestPrivate : public IoTRequestPrivate {

public:
    ClearDefaultAuthorizerRequestPrivate(const IoTRequest::Action action,
                                   ClearDefaultAuthorizerRequest * const q);
    ClearDefaultAuthorizerRequestPrivate(const ClearDefaultAuthorizerRequestPrivate &other,
                                   ClearDefaultAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(ClearDefaultAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
