// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTDATASTOREREQUEST_H
#define QTAWS_GETEVENTDATASTOREREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetEventDataStoreRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT GetEventDataStoreRequest : public CloudTrailRequest {

public:
    GetEventDataStoreRequest(const GetEventDataStoreRequest &other);
    GetEventDataStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
