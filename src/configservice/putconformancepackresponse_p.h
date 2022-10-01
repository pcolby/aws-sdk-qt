// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFORMANCEPACKRESPONSE_P_H
#define QTAWS_PUTCONFORMANCEPACKRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutConformancePackResponse;

class PutConformancePackResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutConformancePackResponsePrivate(PutConformancePackResponse * const q);

    void parsePutConformancePackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConformancePackResponse)
    Q_DISABLE_COPY(PutConformancePackResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
