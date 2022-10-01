// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTECALCULATORRESPONSE_H
#define QTAWS_DELETEROUTECALCULATORRESPONSE_H

#include "locationresponse.h"
#include "deleteroutecalculatorrequest.h"

namespace QtAws {
namespace Location {

class DeleteRouteCalculatorResponsePrivate;

class QTAWSLOCATION_EXPORT DeleteRouteCalculatorResponse : public LocationResponse {
    Q_OBJECT

public:
    DeleteRouteCalculatorResponse(const DeleteRouteCalculatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRouteCalculatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteCalculatorResponse)
    Q_DISABLE_COPY(DeleteRouteCalculatorResponse)

};

} // namespace Location
} // namespace QtAws

#endif
