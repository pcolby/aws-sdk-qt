// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVARIABLEREQUEST_P_H
#define QTAWS_CREATEVARIABLEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "createvariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateVariableRequest;

class CreateVariableRequestPrivate : public FraudDetectorRequestPrivate {

public:
    CreateVariableRequestPrivate(const FraudDetectorRequest::Action action,
                                   CreateVariableRequest * const q);
    CreateVariableRequestPrivate(const CreateVariableRequestPrivate &other,
                                   CreateVariableRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
