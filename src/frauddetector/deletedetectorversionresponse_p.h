// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORVERSIONRESPONSE_P_H
#define QTAWS_DELETEDETECTORVERSIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteDetectorVersionResponse;

class DeleteDetectorVersionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteDetectorVersionResponsePrivate(DeleteDetectorVersionResponse * const q);

    void parseDeleteDetectorVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDetectorVersionResponse)
    Q_DISABLE_COPY(DeleteDetectorVersionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
