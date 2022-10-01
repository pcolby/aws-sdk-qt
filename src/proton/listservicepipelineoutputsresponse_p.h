// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPIPELINEOUTPUTSRESPONSE_P_H
#define QTAWS_LISTSERVICEPIPELINEOUTPUTSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListServicePipelineOutputsResponse;

class ListServicePipelineOutputsResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListServicePipelineOutputsResponsePrivate(ListServicePipelineOutputsResponse * const q);

    void parseListServicePipelineOutputsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServicePipelineOutputsResponse)
    Q_DISABLE_COPY(ListServicePipelineOutputsResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
