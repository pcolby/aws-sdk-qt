// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTCLASSIFICATIONJOBREQUEST_P_H
#define QTAWS_STARTDOCUMENTCLASSIFICATIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "startdocumentclassificationjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartDocumentClassificationJobRequest;

class StartDocumentClassificationJobRequestPrivate : public ComprehendRequestPrivate {

public:
    StartDocumentClassificationJobRequestPrivate(const ComprehendRequest::Action action,
                                   StartDocumentClassificationJobRequest * const q);
    StartDocumentClassificationJobRequestPrivate(const StartDocumentClassificationJobRequestPrivate &other,
                                   StartDocumentClassificationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDocumentClassificationJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
