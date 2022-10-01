// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETIMESERIESFROMASSETPROPERTYREQUEST_H
#define QTAWS_DISASSOCIATETIMESERIESFROMASSETPROPERTYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DisassociateTimeSeriesFromAssetPropertyRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DisassociateTimeSeriesFromAssetPropertyRequest : public IoTSiteWiseRequest {

public:
    DisassociateTimeSeriesFromAssetPropertyRequest(const DisassociateTimeSeriesFromAssetPropertyRequest &other);
    DisassociateTimeSeriesFromAssetPropertyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTimeSeriesFromAssetPropertyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
