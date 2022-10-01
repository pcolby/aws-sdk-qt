// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETRELATIONSHIPSREQUEST_H
#define QTAWS_LISTASSETRELATIONSHIPSREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssetRelationshipsRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT ListAssetRelationshipsRequest : public IoTSiteWiseRequest {

public:
    ListAssetRelationshipsRequest(const ListAssetRelationshipsRequest &other);
    ListAssetRelationshipsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssetRelationshipsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
