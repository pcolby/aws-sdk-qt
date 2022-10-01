// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEPACKAGESREQUEST_P_H
#define QTAWS_UPDATEDATASOURCEPACKAGESREQUEST_P_H

#include "detectiverequest_p.h"
#include "updatedatasourcepackagesrequest.h"

namespace QtAws {
namespace Detective {

class UpdateDatasourcePackagesRequest;

class UpdateDatasourcePackagesRequestPrivate : public DetectiveRequestPrivate {

public:
    UpdateDatasourcePackagesRequestPrivate(const DetectiveRequest::Action action,
                                   UpdateDatasourcePackagesRequest * const q);
    UpdateDatasourcePackagesRequestPrivate(const UpdateDatasourcePackagesRequestPrivate &other,
                                   UpdateDatasourcePackagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDatasourcePackagesRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
