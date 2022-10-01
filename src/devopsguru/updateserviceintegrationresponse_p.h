// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEINTEGRATIONRESPONSE_P_H
#define QTAWS_UPDATESERVICEINTEGRATIONRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateServiceIntegrationResponse;

class UpdateServiceIntegrationResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit UpdateServiceIntegrationResponsePrivate(UpdateServiceIntegrationResponse * const q);

    void parseUpdateServiceIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceIntegrationResponse)
    Q_DISABLE_COPY(UpdateServiceIntegrationResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
