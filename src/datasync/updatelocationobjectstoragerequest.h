// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONOBJECTSTORAGEREQUEST_H
#define QTAWS_UPDATELOCATIONOBJECTSTORAGEREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationObjectStorageRequestPrivate;

class QTAWSDATASYNC_EXPORT UpdateLocationObjectStorageRequest : public DataSyncRequest {

public:
    UpdateLocationObjectStorageRequest(const UpdateLocationObjectStorageRequest &other);
    UpdateLocationObjectStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLocationObjectStorageRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
