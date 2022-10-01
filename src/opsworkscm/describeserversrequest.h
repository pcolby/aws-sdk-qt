// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVERSREQUEST_H
#define QTAWS_DESCRIBESERVERSREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeServersRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT DescribeServersRequest : public OpsWorksCmRequest {

public:
    DescribeServersRequest(const DescribeServersRequest &other);
    DescribeServersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServersRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
