// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINVENTORYDELETIONSREQUEST_H
#define QTAWS_DESCRIBEINVENTORYDELETIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInventoryDeletionsRequestPrivate;

class QTAWSSSM_EXPORT DescribeInventoryDeletionsRequest : public SsmRequest {

public:
    DescribeInventoryDeletionsRequest(const DescribeInventoryDeletionsRequest &other);
    DescribeInventoryDeletionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInventoryDeletionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
