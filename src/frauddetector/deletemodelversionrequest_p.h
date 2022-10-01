// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELVERSIONREQUEST_P_H
#define QTAWS_DELETEMODELVERSIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deletemodelversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteModelVersionRequest;

class DeleteModelVersionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteModelVersionRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteModelVersionRequest * const q);
    DeleteModelVersionRequestPrivate(const DeleteModelVersionRequestPrivate &other,
                                   DeleteModelVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteModelVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
