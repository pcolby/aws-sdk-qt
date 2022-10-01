// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAYERRESPONSE_P_H
#define QTAWS_DELETELAYERRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DeleteLayerResponse;

class DeleteLayerResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DeleteLayerResponsePrivate(DeleteLayerResponse * const q);

    void parseDeleteLayerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLayerResponse)
    Q_DISABLE_COPY(DeleteLayerResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
