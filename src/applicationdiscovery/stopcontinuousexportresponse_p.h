// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTINUOUSEXPORTRESPONSE_P_H
#define QTAWS_STOPCONTINUOUSEXPORTRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StopContinuousExportResponse;

class StopContinuousExportResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit StopContinuousExportResponsePrivate(StopContinuousExportResponse * const q);

    void parseStopContinuousExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopContinuousExportResponse)
    Q_DISABLE_COPY(StopContinuousExportResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
