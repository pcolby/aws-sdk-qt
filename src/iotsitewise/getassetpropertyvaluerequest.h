// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYVALUEREQUEST_H
#define QTAWS_GETASSETPROPERTYVALUEREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyValueRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT GetAssetPropertyValueRequest : public IoTSiteWiseRequest {

public:
    GetAssetPropertyValueRequest(const GetAssetPropertyValueRequest &other);
    GetAssetPropertyValueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssetPropertyValueRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
