// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECURITYHUBRESPONSE_P_H
#define QTAWS_SECURITYHUBRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class SecurityHubResponse;

class SecurityHubResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SecurityHubResponsePrivate(SecurityHubResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SecurityHubResponse)
    Q_DISABLE_COPY(SecurityHubResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
