// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPERMISSIONREQUEST_H
#define QTAWS_SETPERMISSIONREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class SetPermissionRequestPrivate;

class QTAWSOPSWORKS_EXPORT SetPermissionRequest : public OpsWorksRequest {

public:
    SetPermissionRequest(const SetPermissionRequest &other);
    SetPermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetPermissionRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
