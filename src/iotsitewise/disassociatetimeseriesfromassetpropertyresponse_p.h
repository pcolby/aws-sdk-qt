// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETIMESERIESFROMASSETPROPERTYRESPONSE_P_H
#define QTAWS_DISASSOCIATETIMESERIESFROMASSETPROPERTYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DisassociateTimeSeriesFromAssetPropertyResponse;

class DisassociateTimeSeriesFromAssetPropertyResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DisassociateTimeSeriesFromAssetPropertyResponsePrivate(DisassociateTimeSeriesFromAssetPropertyResponse * const q);

    void parseDisassociateTimeSeriesFromAssetPropertyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTimeSeriesFromAssetPropertyResponse)
    Q_DISABLE_COPY(DisassociateTimeSeriesFromAssetPropertyResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
