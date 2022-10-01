// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELVERSIONSTATUSRESPONSE_P_H
#define QTAWS_UPDATEMODELVERSIONSTATUSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelVersionStatusResponse;

class UpdateModelVersionStatusResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateModelVersionStatusResponsePrivate(UpdateModelVersionStatusResponse * const q);

    void parseUpdateModelVersionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateModelVersionStatusResponse)
    Q_DISABLE_COPY(UpdateModelVersionStatusResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
