// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVARIABLEREQUEST_P_H
#define QTAWS_DELETEVARIABLEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deletevariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteVariableRequest;

class DeleteVariableRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteVariableRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteVariableRequest * const q);
    DeleteVariableRequestPrivate(const DeleteVariableRequestPrivate &other,
                                   DeleteVariableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
