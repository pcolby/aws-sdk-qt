// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORRESPONSE_P_H
#define QTAWS_DELETEDETECTORRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteDetectorResponse;

class DeleteDetectorResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteDetectorResponsePrivate(DeleteDetectorResponse * const q);

    void parseDeleteDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDetectorResponse)
    Q_DISABLE_COPY(DeleteDetectorResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
