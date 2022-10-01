// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELVERSIONREQUEST_P_H
#define QTAWS_UPDATEMODELVERSIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updatemodelversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelVersionRequest;

class UpdateModelVersionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateModelVersionRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateModelVersionRequest * const q);
    UpdateModelVersionRequestPrivate(const UpdateModelVersionRequestPrivate &other,
                                   UpdateModelVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateModelVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
