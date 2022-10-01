// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECANARIESREQUEST_H
#define QTAWS_DESCRIBECANARIESREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class DescribeCanariesRequestPrivate;

class QTAWSSYNTHETICS_EXPORT DescribeCanariesRequest : public SyntheticsRequest {

public:
    DescribeCanariesRequest(const DescribeCanariesRequest &other);
    DescribeCanariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCanariesRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
