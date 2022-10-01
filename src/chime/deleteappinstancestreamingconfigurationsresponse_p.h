// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DELETEAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceStreamingConfigurationsResponse;

class DeleteAppInstanceStreamingConfigurationsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteAppInstanceStreamingConfigurationsResponsePrivate(DeleteAppInstanceStreamingConfigurationsResponse * const q);

    void parseDeleteAppInstanceStreamingConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceStreamingConfigurationsResponse)
    Q_DISABLE_COPY(DeleteAppInstanceStreamingConfigurationsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
