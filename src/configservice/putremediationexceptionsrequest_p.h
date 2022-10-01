// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREMEDIATIONEXCEPTIONSREQUEST_P_H
#define QTAWS_PUTREMEDIATIONEXCEPTIONSREQUEST_P_H

#include "configservicerequest_p.h"
#include "putremediationexceptionsrequest.h"

namespace QtAws {
namespace ConfigService {

class PutRemediationExceptionsRequest;

class PutRemediationExceptionsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutRemediationExceptionsRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutRemediationExceptionsRequest * const q);
    PutRemediationExceptionsRequestPrivate(const PutRemediationExceptionsRequestPrivate &other,
                                   PutRemediationExceptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRemediationExceptionsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
