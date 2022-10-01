// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYVALUEHISTORYREQUEST_H
#define QTAWS_GETASSETPROPERTYVALUEHISTORYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyValueHistoryRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT GetAssetPropertyValueHistoryRequest : public IoTSiteWiseRequest {

public:
    GetAssetPropertyValueHistoryRequest(const GetAssetPropertyValueHistoryRequest &other);
    GetAssetPropertyValueHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssetPropertyValueHistoryRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
