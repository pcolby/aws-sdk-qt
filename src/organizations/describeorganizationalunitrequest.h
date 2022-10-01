// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONALUNITREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONALUNITREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeOrganizationalUnitRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT DescribeOrganizationalUnitRequest : public OrganizationsRequest {

public:
    DescribeOrganizationalUnitRequest(const DescribeOrganizationalUnitRequest &other);
    DescribeOrganizationalUnitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationalUnitRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
