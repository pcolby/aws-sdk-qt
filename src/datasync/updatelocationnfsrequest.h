// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONNFSREQUEST_H
#define QTAWS_UPDATELOCATIONNFSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationNfsRequestPrivate;

class QTAWSDATASYNC_EXPORT UpdateLocationNfsRequest : public DataSyncRequest {

public:
    UpdateLocationNfsRequest(const UpdateLocationNfsRequest &other);
    UpdateLocationNfsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLocationNfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
