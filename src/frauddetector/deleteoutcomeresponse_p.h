// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTCOMERESPONSE_P_H
#define QTAWS_DELETEOUTCOMERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteOutcomeResponse;

class DeleteOutcomeResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteOutcomeResponsePrivate(DeleteOutcomeResponse * const q);

    void parseDeleteOutcomeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOutcomeResponse)
    Q_DISABLE_COPY(DeleteOutcomeResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
