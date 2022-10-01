// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTCOMESRESPONSE_P_H
#define QTAWS_GETOUTCOMESRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetOutcomesResponse;

class GetOutcomesResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetOutcomesResponsePrivate(GetOutcomesResponse * const q);

    void parseGetOutcomesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOutcomesResponse)
    Q_DISABLE_COPY(GetOutcomesResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
