// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVALUATIONSREQUEST_P_H
#define QTAWS_PUTEVALUATIONSREQUEST_P_H

#include "configservicerequest_p.h"
#include "putevaluationsrequest.h"

namespace QtAws {
namespace ConfigService {

class PutEvaluationsRequest;

class PutEvaluationsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutEvaluationsRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutEvaluationsRequest * const q);
    PutEvaluationsRequestPrivate(const PutEvaluationsRequestPrivate &other,
                                   PutEvaluationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEvaluationsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
