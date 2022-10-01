// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONREQUEST_P_H
#define QTAWS_GETOPERATIONREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getoperationrequest.h"

namespace QtAws {
namespace Lightsail {

class GetOperationRequest;

class GetOperationRequestPrivate : public LightsailRequestPrivate {

public:
    GetOperationRequestPrivate(const LightsailRequest::Action action,
                                   GetOperationRequest * const q);
    GetOperationRequestPrivate(const GetOperationRequestPrivate &other,
                                   GetOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOperationRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
