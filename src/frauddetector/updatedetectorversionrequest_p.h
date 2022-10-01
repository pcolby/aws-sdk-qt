// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONREQUEST_P_H
#define QTAWS_UPDATEDETECTORVERSIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updatedetectorversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionRequest;

class UpdateDetectorVersionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateDetectorVersionRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateDetectorVersionRequest * const q);
    UpdateDetectorVersionRequestPrivate(const UpdateDetectorVersionRequestPrivate &other,
                                   UpdateDetectorVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
