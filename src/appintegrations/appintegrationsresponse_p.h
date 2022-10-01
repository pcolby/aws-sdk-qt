// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPINTEGRATIONSRESPONSE_P_H
#define QTAWS_APPINTEGRATIONSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AppIntegrations {

class AppIntegrationsResponse;

class AppIntegrationsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AppIntegrationsResponsePrivate(AppIntegrationsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AppIntegrationsResponse)
    Q_DISABLE_COPY(AppIntegrationsResponsePrivate)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
