// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEPACKAGESREQUEST_H
#define QTAWS_UPDATEDATASOURCEPACKAGESREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class UpdateDatasourcePackagesRequestPrivate;

class QTAWSDETECTIVE_EXPORT UpdateDatasourcePackagesRequest : public DetectiveRequest {

public:
    UpdateDatasourcePackagesRequest(const UpdateDatasourcePackagesRequest &other);
    UpdateDatasourcePackagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatasourcePackagesRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
