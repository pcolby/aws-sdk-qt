// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_PUTAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutAppInstanceStreamingConfigurationsResponse;

class PutAppInstanceStreamingConfigurationsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutAppInstanceStreamingConfigurationsResponsePrivate(PutAppInstanceStreamingConfigurationsResponse * const q);

    void parsePutAppInstanceStreamingConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAppInstanceStreamingConfigurationsResponse)
    Q_DISABLE_COPY(PutAppInstanceStreamingConfigurationsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
