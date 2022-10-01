// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVARIABLESREQUEST_P_H
#define QTAWS_GETVARIABLESREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getvariablesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetVariablesRequest;

class GetVariablesRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetVariablesRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetVariablesRequest * const q);
    GetVariablesRequestPrivate(const GetVariablesRequestPrivate &other,
                                   GetVariablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVariablesRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
