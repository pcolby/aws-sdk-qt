// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeAccountAttributesRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT DescribeAccountAttributesRequest : public OpsWorksCmRequest {

public:
    DescribeAccountAttributesRequest(const DescribeAccountAttributesRequest &other);
    DescribeAccountAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAttributesRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
