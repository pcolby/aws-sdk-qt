// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERRXNORMRESPONSE_P_H
#define QTAWS_INFERRXNORMRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class InferRxNormResponse;

class InferRxNormResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit InferRxNormResponsePrivate(InferRxNormResponse * const q);

    void parseInferRxNormResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InferRxNormResponse)
    Q_DISABLE_COPY(InferRxNormResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
