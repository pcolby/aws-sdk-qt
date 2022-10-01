// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREEVENTDATASTOREREQUEST_H
#define QTAWS_RESTOREEVENTDATASTOREREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class RestoreEventDataStoreRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT RestoreEventDataStoreRequest : public CloudTrailRequest {

public:
    RestoreEventDataStoreRequest(const RestoreEventDataStoreRequest &other);
    RestoreEventDataStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
