// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCETREERESPONSE_H
#define QTAWS_DELETERESOURCETREERESPONSE_H

#include "forecastresponse.h"
#include "deleteresourcetreerequest.h"

namespace QtAws {
namespace Forecast {

class DeleteResourceTreeResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteResourceTreeResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteResourceTreeResponse(const DeleteResourceTreeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourceTreeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceTreeResponse)
    Q_DISABLE_COPY(DeleteResourceTreeResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
