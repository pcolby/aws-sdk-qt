// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONSMBREQUEST_H
#define QTAWS_UPDATELOCATIONSMBREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationSmbRequestPrivate;

class QTAWSDATASYNC_EXPORT UpdateLocationSmbRequest : public DataSyncRequest {

public:
    UpdateLocationSmbRequest(const UpdateLocationSmbRequest &other);
    UpdateLocationSmbRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLocationSmbRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
