// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTERNALMODELSREQUEST_P_H
#define QTAWS_GETEXTERNALMODELSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getexternalmodelsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetExternalModelsRequest;

class GetExternalModelsRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetExternalModelsRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetExternalModelsRequest * const q);
    GetExternalModelsRequestPrivate(const GetExternalModelsRequestPrivate &other,
                                   GetExternalModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExternalModelsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
