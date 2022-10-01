// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEXTERNALMODELRESPONSE_P_H
#define QTAWS_PUTEXTERNALMODELRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class PutExternalModelResponse;

class PutExternalModelResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit PutExternalModelResponsePrivate(PutExternalModelResponse * const q);

    void parsePutExternalModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutExternalModelResponse)
    Q_DISABLE_COPY(PutExternalModelResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
