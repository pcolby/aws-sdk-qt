// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERRXNORMREQUEST_P_H
#define QTAWS_INFERRXNORMREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "inferrxnormrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferRxNormRequest;

class InferRxNormRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    InferRxNormRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   InferRxNormRequest * const q);
    InferRxNormRequestPrivate(const InferRxNormRequestPrivate &other,
                                   InferRxNormRequest * const q);

private:
    Q_DECLARE_PUBLIC(InferRxNormRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
