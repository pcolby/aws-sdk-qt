// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERICD10CMREQUEST_P_H
#define QTAWS_INFERICD10CMREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "infericd10cmrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferICD10CMRequest;

class InferICD10CMRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    InferICD10CMRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   InferICD10CMRequest * const q);
    InferICD10CMRequestPrivate(const InferICD10CMRequestPrivate &other,
                                   InferICD10CMRequest * const q);

private:
    Q_DECLARE_PUBLIC(InferICD10CMRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
