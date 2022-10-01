// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECROSSACCOUNTACCESSROLEREQUEST_H
#define QTAWS_DESCRIBECROSSACCOUNTACCESSROLEREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeCrossAccountAccessRoleRequestPrivate;

class QTAWSINSPECTOR_EXPORT DescribeCrossAccountAccessRoleRequest : public InspectorRequest {

public:
    DescribeCrossAccountAccessRoleRequest(const DescribeCrossAccountAccessRoleRequest &other);
    DescribeCrossAccountAccessRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCrossAccountAccessRoleRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
