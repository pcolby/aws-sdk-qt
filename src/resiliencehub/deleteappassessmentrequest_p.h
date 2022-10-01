// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPASSESSMENTREQUEST_P_H
#define QTAWS_DELETEAPPASSESSMENTREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "deleteappassessmentrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteAppAssessmentRequest;

class DeleteAppAssessmentRequestPrivate : public ResilienceHubRequestPrivate {

public:
    DeleteAppAssessmentRequestPrivate(const ResilienceHubRequest::Action action,
                                   DeleteAppAssessmentRequest * const q);
    DeleteAppAssessmentRequestPrivate(const DeleteAppAssessmentRequestPrivate &other,
                                   DeleteAppAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppAssessmentRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
