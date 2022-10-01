// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTDATASTOREREQUEST_H
#define QTAWS_DELETEEVENTDATASTOREREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class DeleteEventDataStoreRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT DeleteEventDataStoreRequest : public CloudTrailRequest {

public:
    DeleteEventDataStoreRequest(const DeleteEventDataStoreRequest &other);
    DeleteEventDataStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
