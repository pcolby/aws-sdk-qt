// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDRAFTAPPVERSIONRESOURCESIMPORTSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEDRAFTAPPVERSIONRESOURCESIMPORTSTATUSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeDraftAppVersionResourcesImportStatusResponse;

class DescribeDraftAppVersionResourcesImportStatusResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit DescribeDraftAppVersionResourcesImportStatusResponsePrivate(DescribeDraftAppVersionResourcesImportStatusResponse * const q);

    void parseDescribeDraftAppVersionResourcesImportStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDraftAppVersionResourcesImportStatusResponse)
    Q_DISABLE_COPY(DescribeDraftAppVersionResourcesImportStatusResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
