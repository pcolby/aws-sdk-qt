// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERDSDBINSTANCEREQUEST_H
#define QTAWS_UPDATERDSDBINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateRdsDbInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT UpdateRdsDbInstanceRequest : public OpsWorksRequest {

public:
    UpdateRdsDbInstanceRequest(const UpdateRdsDbInstanceRequest &other);
    UpdateRdsDbInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRdsDbInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
