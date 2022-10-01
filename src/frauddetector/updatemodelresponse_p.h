// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELRESPONSE_P_H
#define QTAWS_UPDATEMODELRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelResponse;

class UpdateModelResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateModelResponsePrivate(UpdateModelResponse * const q);

    void parseUpdateModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateModelResponse)
    Q_DISABLE_COPY(UpdateModelResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
