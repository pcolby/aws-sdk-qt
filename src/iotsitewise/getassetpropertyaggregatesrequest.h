// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYAGGREGATESREQUEST_H
#define QTAWS_GETASSETPROPERTYAGGREGATESREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyAggregatesRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT GetAssetPropertyAggregatesRequest : public IoTSiteWiseRequest {

public:
    GetAssetPropertyAggregatesRequest(const GetAssetPropertyAggregatesRequest &other);
    GetAssetPropertyAggregatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssetPropertyAggregatesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
