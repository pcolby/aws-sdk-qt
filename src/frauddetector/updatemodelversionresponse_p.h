// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELVERSIONRESPONSE_P_H
#define QTAWS_UPDATEMODELVERSIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelVersionResponse;

class UpdateModelVersionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateModelVersionResponsePrivate(UpdateModelVersionResponse * const q);

    void parseUpdateModelVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateModelVersionResponse)
    Q_DISABLE_COPY(UpdateModelVersionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
