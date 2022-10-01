// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPCOMPONENTCOMPLIANCESRESPONSE_H
#define QTAWS_LISTAPPCOMPONENTCOMPLIANCESRESPONSE_H

#include "resiliencehubresponse.h"
#include "listappcomponentcompliancesrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppComponentCompliancesResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppComponentCompliancesResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListAppComponentCompliancesResponse(const ListAppComponentCompliancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppComponentCompliancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppComponentCompliancesResponse)
    Q_DISABLE_COPY(ListAppComponentCompliancesResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
