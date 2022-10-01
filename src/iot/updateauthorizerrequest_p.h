// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHORIZERREQUEST_P_H
#define QTAWS_UPDATEAUTHORIZERREQUEST_P_H

#include "iotrequest_p.h"
#include "updateauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class UpdateAuthorizerRequest;

class UpdateAuthorizerRequestPrivate : public IoTRequestPrivate {

public:
    UpdateAuthorizerRequestPrivate(const IoTRequest::Action action,
                                   UpdateAuthorizerRequest * const q);
    UpdateAuthorizerRequestPrivate(const UpdateAuthorizerRequestPrivate &other,
                                   UpdateAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
