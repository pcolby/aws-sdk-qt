// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELREQUEST_P_H
#define QTAWS_UPDATEMODELREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updatemodelrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelRequest;

class UpdateModelRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateModelRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateModelRequest * const q);
    UpdateModelRequestPrivate(const UpdateModelRequestPrivate &other,
                                   UpdateModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateModelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
