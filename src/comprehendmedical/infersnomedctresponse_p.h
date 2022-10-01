// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERSNOMEDCTRESPONSE_P_H
#define QTAWS_INFERSNOMEDCTRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class InferSNOMEDCTResponse;

class InferSNOMEDCTResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit InferSNOMEDCTResponsePrivate(InferSNOMEDCTResponse * const q);

    void parseInferSNOMEDCTResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InferSNOMEDCTResponse)
    Q_DISABLE_COPY(InferSNOMEDCTResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
