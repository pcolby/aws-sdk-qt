// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERENGINEATTRIBUTESRESPONSE_P_H
#define QTAWS_UPDATESERVERENGINEATTRIBUTESRESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class UpdateServerEngineAttributesResponse;

class UpdateServerEngineAttributesResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit UpdateServerEngineAttributesResponsePrivate(UpdateServerEngineAttributesResponse * const q);

    void parseUpdateServerEngineAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServerEngineAttributesResponse)
    Q_DISABLE_COPY(UpdateServerEngineAttributesResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
