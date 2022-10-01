// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCONFIGURATIONSRESPONSE_P_H
#define QTAWS_EXPORTCONFIGURATIONSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ExportConfigurationsResponse;

class ExportConfigurationsResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit ExportConfigurationsResponsePrivate(ExportConfigurationsResponse * const q);

    void parseExportConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportConfigurationsResponse)
    Q_DISABLE_COPY(ExportConfigurationsResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
