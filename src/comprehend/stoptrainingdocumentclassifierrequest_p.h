// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGDOCUMENTCLASSIFIERREQUEST_P_H
#define QTAWS_STOPTRAININGDOCUMENTCLASSIFIERREQUEST_P_H

#include "comprehendrequest_p.h"
#include "stoptrainingdocumentclassifierrequest.h"

namespace QtAws {
namespace Comprehend {

class StopTrainingDocumentClassifierRequest;

class StopTrainingDocumentClassifierRequestPrivate : public ComprehendRequestPrivate {

public:
    StopTrainingDocumentClassifierRequestPrivate(const ComprehendRequest::Action action,
                                   StopTrainingDocumentClassifierRequest * const q);
    StopTrainingDocumentClassifierRequestPrivate(const StopTrainingDocumentClassifierRequestPrivate &other,
                                   StopTrainingDocumentClassifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopTrainingDocumentClassifierRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
