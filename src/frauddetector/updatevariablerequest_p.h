// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVARIABLEREQUEST_P_H
#define QTAWS_UPDATEVARIABLEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updatevariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateVariableRequest;

class UpdateVariableRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateVariableRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateVariableRequest * const q);
    UpdateVariableRequestPrivate(const UpdateVariableRequestPrivate &other,
                                   UpdateVariableRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
