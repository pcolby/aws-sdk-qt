// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERUNTIMEVERSIONSREQUEST_H
#define QTAWS_DESCRIBERUNTIMEVERSIONSREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class DescribeRuntimeVersionsRequestPrivate;

class QTAWSSYNTHETICS_EXPORT DescribeRuntimeVersionsRequest : public SyntheticsRequest {

public:
    DescribeRuntimeVersionsRequest(const DescribeRuntimeVersionsRequest &other);
    DescribeRuntimeVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuntimeVersionsRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
