// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORVERSIONREQUEST_P_H
#define QTAWS_DELETEDETECTORVERSIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deletedetectorversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteDetectorVersionRequest;

class DeleteDetectorVersionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteDetectorVersionRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteDetectorVersionRequest * const q);
    DeleteDetectorVersionRequestPrivate(const DeleteDetectorVersionRequestPrivate &other,
                                   DeleteDetectorVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDetectorVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
