// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTERNALMODELREQUEST_P_H
#define QTAWS_DELETEEXTERNALMODELREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deleteexternalmodelrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteExternalModelRequest;

class DeleteExternalModelRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteExternalModelRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteExternalModelRequest * const q);
    DeleteExternalModelRequestPrivate(const DeleteExternalModelRequestPrivate &other,
                                   DeleteExternalModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExternalModelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
