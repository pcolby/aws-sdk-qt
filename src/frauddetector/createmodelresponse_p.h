// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELRESPONSE_P_H
#define QTAWS_CREATEMODELRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class CreateModelResponse;

class CreateModelResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit CreateModelResponsePrivate(CreateModelResponse * const q);

    void parseCreateModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateModelResponse)
    Q_DISABLE_COPY(CreateModelResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
