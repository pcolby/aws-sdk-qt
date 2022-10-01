// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELVERSIONRESPONSE_P_H
#define QTAWS_DELETEMODELVERSIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteModelVersionResponse;

class DeleteModelVersionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteModelVersionResponsePrivate(DeleteModelVersionResponse * const q);

    void parseDeleteModelVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelVersionResponse)
    Q_DISABLE_COPY(DeleteModelVersionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
