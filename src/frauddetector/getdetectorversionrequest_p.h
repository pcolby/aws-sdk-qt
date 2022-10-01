// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORVERSIONREQUEST_P_H
#define QTAWS_GETDETECTORVERSIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getdetectorversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetDetectorVersionRequest;

class GetDetectorVersionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetDetectorVersionRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetDetectorVersionRequest * const q);
    GetDetectorVersionRequestPrivate(const GetDetectorVersionRequestPrivate &other,
                                   GetDetectorVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDetectorVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
