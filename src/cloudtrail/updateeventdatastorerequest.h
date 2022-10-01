// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTDATASTOREREQUEST_H
#define QTAWS_UPDATEEVENTDATASTOREREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class UpdateEventDataStoreRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT UpdateEventDataStoreRequest : public CloudTrailRequest {

public:
    UpdateEventDataStoreRequest(const UpdateEventDataStoreRequest &other);
    UpdateEventDataStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
