// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_GETAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetAppInstanceStreamingConfigurationsResponse;

class GetAppInstanceStreamingConfigurationsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetAppInstanceStreamingConfigurationsResponsePrivate(GetAppInstanceStreamingConfigurationsResponse * const q);

    void parseGetAppInstanceStreamingConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppInstanceStreamingConfigurationsResponse)
    Q_DISABLE_COPY(GetAppInstanceStreamingConfigurationsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
