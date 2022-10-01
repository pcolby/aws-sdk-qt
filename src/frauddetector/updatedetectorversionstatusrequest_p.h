// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONSTATUSREQUEST_P_H
#define QTAWS_UPDATEDETECTORVERSIONSTATUSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updatedetectorversionstatusrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionStatusRequest;

class UpdateDetectorVersionStatusRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateDetectorVersionStatusRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateDetectorVersionStatusRequest * const q);
    UpdateDetectorVersionStatusRequestPrivate(const UpdateDetectorVersionStatusRequestPrivate &other,
                                   UpdateDetectorVersionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorVersionStatusRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
