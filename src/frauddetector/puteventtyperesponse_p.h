// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTTYPERESPONSE_P_H
#define QTAWS_PUTEVENTTYPERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class PutEventTypeResponse;

class PutEventTypeResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit PutEventTypeResponsePrivate(PutEventTypeResponse * const q);

    void parsePutEventTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEventTypeResponse)
    Q_DISABLE_COPY(PutEventTypeResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
