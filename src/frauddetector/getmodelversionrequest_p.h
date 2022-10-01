// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELVERSIONREQUEST_P_H
#define QTAWS_GETMODELVERSIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getmodelversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetModelVersionRequest;

class GetModelVersionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetModelVersionRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetModelVersionRequest * const q);
    GetModelVersionRequestPrivate(const GetModelVersionRequestPrivate &other,
                                   GetModelVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetModelVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
