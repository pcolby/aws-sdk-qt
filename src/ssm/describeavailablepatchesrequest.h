// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABLEPATCHESREQUEST_H
#define QTAWS_DESCRIBEAVAILABLEPATCHESREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAvailablePatchesRequestPrivate;

class QTAWSSSM_EXPORT DescribeAvailablePatchesRequest : public SsmRequest {

public:
    DescribeAvailablePatchesRequest(const DescribeAvailablePatchesRequest &other);
    DescribeAvailablePatchesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAvailablePatchesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
