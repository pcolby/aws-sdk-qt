// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETIMESERIESTOASSETPROPERTYREQUEST_H
#define QTAWS_ASSOCIATETIMESERIESTOASSETPROPERTYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class AssociateTimeSeriesToAssetPropertyRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT AssociateTimeSeriesToAssetPropertyRequest : public IoTSiteWiseRequest {

public:
    AssociateTimeSeriesToAssetPropertyRequest(const AssociateTimeSeriesToAssetPropertyRequest &other);
    AssociateTimeSeriesToAssetPropertyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTimeSeriesToAssetPropertyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
