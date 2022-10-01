// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEPIPELINERESPONSE_P_H
#define QTAWS_UPDATESERVICEPIPELINERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class UpdateServicePipelineResponse;

class UpdateServicePipelineResponsePrivate : public ProtonResponsePrivate {

public:

    explicit UpdateServicePipelineResponsePrivate(UpdateServicePipelineResponse * const q);

    void parseUpdateServicePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServicePipelineResponse)
    Q_DISABLE_COPY(UpdateServicePipelineResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
