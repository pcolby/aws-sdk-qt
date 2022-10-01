// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTECALCULATORSRESPONSE_H
#define QTAWS_LISTROUTECALCULATORSRESPONSE_H

#include "locationresponse.h"
#include "listroutecalculatorsrequest.h"

namespace QtAws {
namespace Location {

class ListRouteCalculatorsResponsePrivate;

class QTAWSLOCATION_EXPORT ListRouteCalculatorsResponse : public LocationResponse {
    Q_OBJECT

public:
    ListRouteCalculatorsResponse(const ListRouteCalculatorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRouteCalculatorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRouteCalculatorsResponse)
    Q_DISABLE_COPY(ListRouteCalculatorsResponse)

};

} // namespace Location
} // namespace QtAws

#endif
