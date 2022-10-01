// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONRESOURCESRESPONSE_H
#define QTAWS_LISTAPPVERSIONRESOURCESRESPONSE_H

#include "resiliencehubresponse.h"
#include "listappversionresourcesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionResourcesResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppVersionResourcesResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListAppVersionResourcesResponse(const ListAppVersionResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppVersionResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppVersionResourcesResponse)
    Q_DISABLE_COPY(ListAppVersionResourcesResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
