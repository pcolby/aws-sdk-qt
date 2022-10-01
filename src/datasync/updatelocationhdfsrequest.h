// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONHDFSREQUEST_H
#define QTAWS_UPDATELOCATIONHDFSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationHdfsRequestPrivate;

class QTAWSDATASYNC_EXPORT UpdateLocationHdfsRequest : public DataSyncRequest {

public:
    UpdateLocationHdfsRequest(const UpdateLocationHdfsRequest &other);
    UpdateLocationHdfsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLocationHdfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
