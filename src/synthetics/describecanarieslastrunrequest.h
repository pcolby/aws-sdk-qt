// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECANARIESLASTRUNREQUEST_H
#define QTAWS_DESCRIBECANARIESLASTRUNREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class DescribeCanariesLastRunRequestPrivate;

class QTAWSSYNTHETICS_EXPORT DescribeCanariesLastRunRequest : public SyntheticsRequest {

public:
    DescribeCanariesLastRunRequest(const DescribeCanariesLastRunRequest &other);
    DescribeCanariesLastRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCanariesLastRunRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
