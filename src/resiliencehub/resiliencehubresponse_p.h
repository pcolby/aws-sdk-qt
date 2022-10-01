// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESILIENCEHUBRESPONSE_P_H
#define QTAWS_RESILIENCEHUBRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ResilienceHubResponse;

class ResilienceHubResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ResilienceHubResponsePrivate(ResilienceHubResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResilienceHubResponse)
    Q_DISABLE_COPY(ResilienceHubResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
