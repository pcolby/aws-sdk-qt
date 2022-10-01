// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONSRESPONSE_H
#define QTAWS_LISTAPPVERSIONSRESPONSE_H

#include "resiliencehubresponse.h"
#include "listappversionsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppVersionsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListAppVersionsResponse(const ListAppVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppVersionsResponse)
    Q_DISABLE_COPY(ListAppVersionsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
