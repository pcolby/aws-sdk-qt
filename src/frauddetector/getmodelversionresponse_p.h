// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELVERSIONRESPONSE_P_H
#define QTAWS_GETMODELVERSIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetModelVersionResponse;

class GetModelVersionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetModelVersionResponsePrivate(GetModelVersionResponse * const q);

    void parseGetModelVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetModelVersionResponse)
    Q_DISABLE_COPY(GetModelVersionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
