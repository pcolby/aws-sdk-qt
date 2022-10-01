// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONSREQUEST_H
#define QTAWS_UPDATEPERMISSIONSREQUEST_H

#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class UpdatePermissionsRequestPrivate;

class QTAWSGRAFANA_EXPORT UpdatePermissionsRequest : public GrafanaRequest {

public:
    UpdatePermissionsRequest(const UpdatePermissionsRequest &other);
    UpdatePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePermissionsRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
