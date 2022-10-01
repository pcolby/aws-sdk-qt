// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCESTORAGECONFIGREQUEST_H
#define QTAWS_UPDATEINSTANCESTORAGECONFIGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateInstanceStorageConfigRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateInstanceStorageConfigRequest : public ConnectRequest {

public:
    UpdateInstanceStorageConfigRequest(const UpdateInstanceStorageConfigRequest &other);
    UpdateInstanceStorageConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceStorageConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
