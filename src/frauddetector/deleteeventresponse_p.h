// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTRESPONSE_P_H
#define QTAWS_DELETEEVENTRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventResponse;

class DeleteEventResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteEventResponsePrivate(DeleteEventResponse * const q);

    void parseDeleteEventResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventResponse)
    Q_DISABLE_COPY(DeleteEventResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
