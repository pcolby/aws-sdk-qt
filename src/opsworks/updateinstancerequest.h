// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEREQUEST_H
#define QTAWS_UPDATEINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT UpdateInstanceRequest : public OpsWorksRequest {

public:
    UpdateInstanceRequest(const UpdateInstanceRequest &other);
    UpdateInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
