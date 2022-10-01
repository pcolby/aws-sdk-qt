// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAYERRESPONSE_P_H
#define QTAWS_CREATELAYERRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class CreateLayerResponse;

class CreateLayerResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit CreateLayerResponsePrivate(CreateLayerResponse * const q);

    void parseCreateLayerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLayerResponse)
    Q_DISABLE_COPY(CreateLayerResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
