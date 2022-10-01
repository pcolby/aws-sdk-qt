// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTENTITYTYPERESPONSE_P_H
#define QTAWS_PUTENTITYTYPERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class PutEntityTypeResponse;

class PutEntityTypeResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit PutEntityTypeResponsePrivate(PutEntityTypeResponse * const q);

    void parsePutEntityTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEntityTypeResponse)
    Q_DISABLE_COPY(PutEntityTypeResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
