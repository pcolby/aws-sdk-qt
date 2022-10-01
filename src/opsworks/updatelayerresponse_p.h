// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAYERRESPONSE_P_H
#define QTAWS_UPDATELAYERRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UpdateLayerResponse;

class UpdateLayerResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UpdateLayerResponsePrivate(UpdateLayerResponse * const q);

    void parseUpdateLayerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLayerResponse)
    Q_DISABLE_COPY(UpdateLayerResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
