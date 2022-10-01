// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKDEPLOYMENTSREQUEST_H
#define QTAWS_LISTBULKDEPLOYMENTSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListBulkDeploymentsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListBulkDeploymentsRequest : public GreengrassRequest {

public:
    ListBulkDeploymentsRequest(const ListBulkDeploymentsRequest &other);
    ListBulkDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBulkDeploymentsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
