// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTINUOUSEXPORTRESPONSE_P_H
#define QTAWS_STARTCONTINUOUSEXPORTRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartContinuousExportResponse;

class StartContinuousExportResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit StartContinuousExportResponsePrivate(StartContinuousExportResponse * const q);

    void parseStartContinuousExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartContinuousExportResponse)
    Q_DISABLE_COPY(StartContinuousExportResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
