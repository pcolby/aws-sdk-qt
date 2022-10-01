// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DescribeOrganizationConfigurationRequestPrivate;

class QTAWSMACIE2_EXPORT DescribeOrganizationConfigurationRequest : public Macie2Request {

public:
    DescribeOrganizationConfigurationRequest(const DescribeOrganizationConfigurationRequest &other);
    DescribeOrganizationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
