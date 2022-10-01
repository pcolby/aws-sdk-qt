// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEAPPVERSIONRESOURCESRESPONSE_H
#define QTAWS_RESOLVEAPPVERSIONRESOURCESRESPONSE_H

#include "resiliencehubresponse.h"
#include "resolveappversionresourcesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ResolveAppVersionResourcesResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ResolveAppVersionResourcesResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ResolveAppVersionResourcesResponse(const ResolveAppVersionResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResolveAppVersionResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveAppVersionResourcesResponse)
    Q_DISABLE_COPY(ResolveAppVersionResourcesResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
