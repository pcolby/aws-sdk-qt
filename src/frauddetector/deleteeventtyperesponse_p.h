// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTTYPERESPONSE_P_H
#define QTAWS_DELETEEVENTTYPERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventTypeResponse;

class DeleteEventTypeResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteEventTypeResponsePrivate(DeleteEventTypeResponse * const q);

    void parseDeleteEventTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventTypeResponse)
    Q_DISABLE_COPY(DeleteEventTypeResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
