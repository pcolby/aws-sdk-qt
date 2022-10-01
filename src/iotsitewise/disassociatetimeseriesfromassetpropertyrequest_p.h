// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETIMESERIESFROMASSETPROPERTYREQUEST_P_H
#define QTAWS_DISASSOCIATETIMESERIESFROMASSETPROPERTYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "disassociatetimeseriesfromassetpropertyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DisassociateTimeSeriesFromAssetPropertyRequest;

class DisassociateTimeSeriesFromAssetPropertyRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DisassociateTimeSeriesFromAssetPropertyRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DisassociateTimeSeriesFromAssetPropertyRequest * const q);
    DisassociateTimeSeriesFromAssetPropertyRequestPrivate(const DisassociateTimeSeriesFromAssetPropertyRequestPrivate &other,
                                   DisassociateTimeSeriesFromAssetPropertyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTimeSeriesFromAssetPropertyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
