// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICIPSREQUEST_H
#define QTAWS_DESCRIBEELASTICIPSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeElasticIpsRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeElasticIpsRequest : public OpsWorksRequest {

public:
    DescribeElasticIpsRequest(const DescribeElasticIpsRequest &other);
    DescribeElasticIpsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticIpsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
