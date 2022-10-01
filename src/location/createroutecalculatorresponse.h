// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTECALCULATORRESPONSE_H
#define QTAWS_CREATEROUTECALCULATORRESPONSE_H

#include "locationresponse.h"
#include "createroutecalculatorrequest.h"

namespace QtAws {
namespace Location {

class CreateRouteCalculatorResponsePrivate;

class QTAWSLOCATION_EXPORT CreateRouteCalculatorResponse : public LocationResponse {
    Q_OBJECT

public:
    CreateRouteCalculatorResponse(const CreateRouteCalculatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRouteCalculatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteCalculatorResponse)
    Q_DISABLE_COPY(CreateRouteCalculatorResponse)

};

} // namespace Location
} // namespace QtAws

#endif
