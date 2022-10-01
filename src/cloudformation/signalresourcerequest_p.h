// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNALRESOURCEREQUEST_P_H
#define QTAWS_SIGNALRESOURCEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "signalresourcerequest.h"

namespace QtAws {
namespace CloudFormation {

class SignalResourceRequest;

class SignalResourceRequestPrivate : public CloudFormationRequestPrivate {

public:
    SignalResourceRequestPrivate(const CloudFormationRequest::Action action,
                                   SignalResourceRequest * const q);
    SignalResourceRequestPrivate(const SignalResourceRequestPrivate &other,
                                   SignalResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(SignalResourceRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
