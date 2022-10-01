// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCEPACKAGESREQUEST_H
#define QTAWS_LISTDATASOURCEPACKAGESREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class ListDatasourcePackagesRequestPrivate;

class QTAWSDETECTIVE_EXPORT ListDatasourcePackagesRequest : public DetectiveRequest {

public:
    ListDatasourcePackagesRequest(const ListDatasourcePackagesRequest &other);
    ListDatasourcePackagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasourcePackagesRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
