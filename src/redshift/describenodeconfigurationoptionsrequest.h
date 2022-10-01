// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODECONFIGURATIONOPTIONSREQUEST_H
#define QTAWS_DESCRIBENODECONFIGURATIONOPTIONSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeNodeConfigurationOptionsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeNodeConfigurationOptionsRequest : public RedshiftRequest {

public:
    DescribeNodeConfigurationOptionsRequest(const DescribeNodeConfigurationOptionsRequest &other);
    DescribeNodeConfigurationOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNodeConfigurationOptionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
