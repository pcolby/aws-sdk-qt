// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONRESOURCEMAPPINGSRESPONSE_H
#define QTAWS_LISTAPPVERSIONRESOURCEMAPPINGSRESPONSE_H

#include "resiliencehubresponse.h"
#include "listappversionresourcemappingsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionResourceMappingsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppVersionResourceMappingsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListAppVersionResourceMappingsResponse(const ListAppVersionResourceMappingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppVersionResourceMappingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppVersionResourceMappingsResponse)
    Q_DISABLE_COPY(ListAppVersionResourceMappingsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
