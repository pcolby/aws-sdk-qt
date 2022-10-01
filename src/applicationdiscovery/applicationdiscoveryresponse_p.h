// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONDISCOVERYRESPONSE_P_H
#define QTAWS_APPLICATIONDISCOVERYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ApplicationDiscoveryResponse;

class ApplicationDiscoveryResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ApplicationDiscoveryResponsePrivate(ApplicationDiscoveryResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplicationDiscoveryResponse)
    Q_DISABLE_COPY(ApplicationDiscoveryResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
