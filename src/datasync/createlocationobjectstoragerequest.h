// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONOBJECTSTORAGEREQUEST_H
#define QTAWS_CREATELOCATIONOBJECTSTORAGEREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationObjectStorageRequestPrivate;

class QTAWSDATASYNC_EXPORT CreateLocationObjectStorageRequest : public DataSyncRequest {

public:
    CreateLocationObjectStorageRequest(const CreateLocationObjectStorageRequest &other);
    CreateLocationObjectStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationObjectStorageRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
