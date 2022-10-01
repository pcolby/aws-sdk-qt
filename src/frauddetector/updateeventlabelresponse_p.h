// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTLABELRESPONSE_P_H
#define QTAWS_UPDATEEVENTLABELRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateEventLabelResponse;

class UpdateEventLabelResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateEventLabelResponsePrivate(UpdateEventLabelResponse * const q);

    void parseUpdateEventLabelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEventLabelResponse)
    Q_DISABLE_COPY(UpdateEventLabelResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
