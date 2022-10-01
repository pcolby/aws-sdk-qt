// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERSNOMEDCTREQUEST_P_H
#define QTAWS_INFERSNOMEDCTREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "infersnomedctrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferSNOMEDCTRequest;

class InferSNOMEDCTRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    InferSNOMEDCTRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   InferSNOMEDCTRequest * const q);
    InferSNOMEDCTRequestPrivate(const InferSNOMEDCTRequestPrivate &other,
                                   InferSNOMEDCTRequest * const q);

private:
    Q_DECLARE_PUBLIC(InferSNOMEDCTRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
