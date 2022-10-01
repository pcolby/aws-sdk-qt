// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELSREQUEST_P_H
#define QTAWS_GETMODELSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getmodelsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetModelsRequest;

class GetModelsRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetModelsRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetModelsRequest * const q);
    GetModelsRequestPrivate(const GetModelsRequestPrivate &other,
                                   GetModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetModelsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
