// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETIMESERIESFROMASSETPROPERTYRESPONSE_H
#define QTAWS_DISASSOCIATETIMESERIESFROMASSETPROPERTYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "disassociatetimeseriesfromassetpropertyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DisassociateTimeSeriesFromAssetPropertyResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DisassociateTimeSeriesFromAssetPropertyResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DisassociateTimeSeriesFromAssetPropertyResponse(const DisassociateTimeSeriesFromAssetPropertyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTimeSeriesFromAssetPropertyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTimeSeriesFromAssetPropertyResponse)
    Q_DISABLE_COPY(DisassociateTimeSeriesFromAssetPropertyResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
