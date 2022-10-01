// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMEDIATIONEXCEPTIONSRESPONSE_P_H
#define QTAWS_DELETEREMEDIATIONEXCEPTIONSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteRemediationExceptionsResponse;

class DeleteRemediationExceptionsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteRemediationExceptionsResponsePrivate(DeleteRemediationExceptionsResponse * const q);

    void parseDeleteRemediationExceptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRemediationExceptionsResponse)
    Q_DISABLE_COPY(DeleteRemediationExceptionsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
