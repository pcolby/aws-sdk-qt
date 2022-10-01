// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTECALCULATORRESPONSE_H
#define QTAWS_UPDATEROUTECALCULATORRESPONSE_H

#include "locationresponse.h"
#include "updateroutecalculatorrequest.h"

namespace QtAws {
namespace Location {

class UpdateRouteCalculatorResponsePrivate;

class QTAWSLOCATION_EXPORT UpdateRouteCalculatorResponse : public LocationResponse {
    Q_OBJECT

public:
    UpdateRouteCalculatorResponse(const UpdateRouteCalculatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRouteCalculatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRouteCalculatorResponse)
    Q_DISABLE_COPY(UpdateRouteCalculatorResponse)

};

} // namespace Location
} // namespace QtAws

#endif
