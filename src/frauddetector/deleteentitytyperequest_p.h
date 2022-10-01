// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYTYPEREQUEST_P_H
#define QTAWS_DELETEENTITYTYPEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deleteentitytyperequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEntityTypeRequest;

class DeleteEntityTypeRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteEntityTypeRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteEntityTypeRequest * const q);
    DeleteEntityTypeRequestPrivate(const DeleteEntityTypeRequestPrivate &other,
                                   DeleteEntityTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEntityTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
