// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGISTRYREQUEST_H
#define QTAWS_DESCRIBEREGISTRYREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeRegistryRequestPrivate;

class QTAWSECR_EXPORT DescribeRegistryRequest : public EcrRequest {

public:
    DescribeRegistryRequest(const DescribeRegistryRequest &other);
    DescribeRegistryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRegistryRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
