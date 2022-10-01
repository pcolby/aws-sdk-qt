// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVALUATIONRESULTSREQUEST_P_H
#define QTAWS_DELETEEVALUATIONRESULTSREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteevaluationresultsrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteEvaluationResultsRequest;

class DeleteEvaluationResultsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteEvaluationResultsRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteEvaluationResultsRequest * const q);
    DeleteEvaluationResultsRequestPrivate(const DeleteEvaluationResultsRequestPrivate &other,
                                   DeleteEvaluationResultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEvaluationResultsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
