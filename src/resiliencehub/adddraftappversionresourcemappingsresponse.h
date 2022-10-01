// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDDRAFTAPPVERSIONRESOURCEMAPPINGSRESPONSE_H
#define QTAWS_ADDDRAFTAPPVERSIONRESOURCEMAPPINGSRESPONSE_H

#include "resiliencehubresponse.h"
#include "adddraftappversionresourcemappingsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class AddDraftAppVersionResourceMappingsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT AddDraftAppVersionResourceMappingsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    AddDraftAppVersionResourceMappingsResponse(const AddDraftAppVersionResourceMappingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddDraftAppVersionResourceMappingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddDraftAppVersionResourceMappingsResponse)
    Q_DISABLE_COPY(AddDraftAppVersionResourceMappingsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
