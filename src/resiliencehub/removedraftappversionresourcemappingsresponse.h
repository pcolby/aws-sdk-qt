// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEDRAFTAPPVERSIONRESOURCEMAPPINGSRESPONSE_H
#define QTAWS_REMOVEDRAFTAPPVERSIONRESOURCEMAPPINGSRESPONSE_H

#include "resiliencehubresponse.h"
#include "removedraftappversionresourcemappingsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class RemoveDraftAppVersionResourceMappingsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT RemoveDraftAppVersionResourceMappingsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    RemoveDraftAppVersionResourceMappingsResponse(const RemoveDraftAppVersionResourceMappingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveDraftAppVersionResourceMappingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveDraftAppVersionResourceMappingsResponse)
    Q_DISABLE_COPY(RemoveDraftAppVersionResourceMappingsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
