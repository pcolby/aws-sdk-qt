// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREMEDIATIONEXCEPTIONSRESPONSE_P_H
#define QTAWS_PUTREMEDIATIONEXCEPTIONSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutRemediationExceptionsResponse;

class PutRemediationExceptionsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutRemediationExceptionsResponsePrivate(PutRemediationExceptionsResponse * const q);

    void parsePutRemediationExceptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRemediationExceptionsResponse)
    Q_DISABLE_COPY(PutRemediationExceptionsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
