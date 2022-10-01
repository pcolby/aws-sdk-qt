// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLABELRESPONSE_P_H
#define QTAWS_PUTLABELRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class PutLabelResponse;

class PutLabelResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit PutLabelResponsePrivate(PutLabelResponse * const q);

    void parsePutLabelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLabelResponse)
    Q_DISABLE_COPY(PutLabelResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
