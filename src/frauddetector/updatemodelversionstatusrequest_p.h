// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELVERSIONSTATUSREQUEST_P_H
#define QTAWS_UPDATEMODELVERSIONSTATUSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updatemodelversionstatusrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelVersionStatusRequest;

class UpdateModelVersionStatusRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateModelVersionStatusRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateModelVersionStatusRequest * const q);
    UpdateModelVersionStatusRequestPrivate(const UpdateModelVersionStatusRequestPrivate &other,
                                   UpdateModelVersionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateModelVersionStatusRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
