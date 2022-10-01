// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELVERSIONREQUEST_P_H
#define QTAWS_CREATEMODELVERSIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "createmodelversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateModelVersionRequest;

class CreateModelVersionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    CreateModelVersionRequestPrivate(const FraudDetectorRequest::Action action,
                                   CreateModelVersionRequest * const q);
    CreateModelVersionRequestPrivate(const CreateModelVersionRequestPrivate &other,
                                   CreateModelVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateModelVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
