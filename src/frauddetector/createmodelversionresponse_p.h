// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELVERSIONRESPONSE_P_H
#define QTAWS_CREATEMODELVERSIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class CreateModelVersionResponse;

class CreateModelVersionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit CreateModelVersionResponsePrivate(CreateModelVersionResponse * const q);

    void parseCreateModelVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateModelVersionResponse)
    Q_DISABLE_COPY(CreateModelVersionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
