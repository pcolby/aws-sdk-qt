// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTCOMEREQUEST_P_H
#define QTAWS_DELETEOUTCOMEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deleteoutcomerequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteOutcomeRequest;

class DeleteOutcomeRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteOutcomeRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteOutcomeRequest * const q);
    DeleteOutcomeRequestPrivate(const DeleteOutcomeRequestPrivate &other,
                                   DeleteOutcomeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOutcomeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
