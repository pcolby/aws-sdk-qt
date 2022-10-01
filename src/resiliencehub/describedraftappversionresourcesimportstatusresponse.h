// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDRAFTAPPVERSIONRESOURCESIMPORTSTATUSRESPONSE_H
#define QTAWS_DESCRIBEDRAFTAPPVERSIONRESOURCESIMPORTSTATUSRESPONSE_H

#include "resiliencehubresponse.h"
#include "describedraftappversionresourcesimportstatusrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeDraftAppVersionResourcesImportStatusResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeDraftAppVersionResourcesImportStatusResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    DescribeDraftAppVersionResourcesImportStatusResponse(const DescribeDraftAppVersionResourcesImportStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDraftAppVersionResourcesImportStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDraftAppVersionResourcesImportStatusResponse)
    Q_DISABLE_COPY(DescribeDraftAppVersionResourcesImportStatusResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
