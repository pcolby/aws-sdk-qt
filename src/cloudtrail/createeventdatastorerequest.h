// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTDATASTOREREQUEST_H
#define QTAWS_CREATEEVENTDATASTOREREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class CreateEventDataStoreRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT CreateEventDataStoreRequest : public CloudTrailRequest {

public:
    CreateEventDataStoreRequest(const CreateEventDataStoreRequest &other);
    CreateEventDataStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
