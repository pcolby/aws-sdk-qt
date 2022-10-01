// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERICD10CMRESPONSE_P_H
#define QTAWS_INFERICD10CMRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class InferICD10CMResponse;

class InferICD10CMResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit InferICD10CMResponsePrivate(InferICD10CMResponse * const q);

    void parseInferICD10CMResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InferICD10CMResponse)
    Q_DISABLE_COPY(InferICD10CMResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
