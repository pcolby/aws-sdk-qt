// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBESECURITYCONFIGURATIONREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class DescribeSecurityConfigurationRequestPrivate;

class QTAWSEMR_EXPORT DescribeSecurityConfigurationRequest : public EmrRequest {

public:
    DescribeSecurityConfigurationRequest(const DescribeSecurityConfigurationRequest &other);
    DescribeSecurityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityConfigurationRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
