// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CALCULATEROUTEMATRIXRESPONSE_H
#define QTAWS_CALCULATEROUTEMATRIXRESPONSE_H

#include "locationresponse.h"
#include "calculateroutematrixrequest.h"

namespace QtAws {
namespace Location {

class CalculateRouteMatrixResponsePrivate;

class QTAWSLOCATION_EXPORT CalculateRouteMatrixResponse : public LocationResponse {
    Q_OBJECT

public:
    CalculateRouteMatrixResponse(const CalculateRouteMatrixRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CalculateRouteMatrixRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CalculateRouteMatrixResponse)
    Q_DISABLE_COPY(CalculateRouteMatrixResponse)

};

} // namespace Location
} // namespace QtAws

#endif
