// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONSMBREQUEST_H
#define QTAWS_CREATELOCATIONSMBREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationSmbRequestPrivate;

class QTAWSDATASYNC_EXPORT CreateLocationSmbRequest : public DataSyncRequest {

public:
    CreateLocationSmbRequest(const CreateLocationSmbRequest &other);
    CreateLocationSmbRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationSmbRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
