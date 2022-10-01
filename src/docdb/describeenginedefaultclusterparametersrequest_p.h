// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSREQUEST_P_H

#include "docdbrequest_p.h"
#include "describeenginedefaultclusterparametersrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeEngineDefaultClusterParametersRequest;

class DescribeEngineDefaultClusterParametersRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeEngineDefaultClusterParametersRequestPrivate(const DocDbRequest::Action action,
                                   DescribeEngineDefaultClusterParametersRequest * const q);
    DescribeEngineDefaultClusterParametersRequestPrivate(const DescribeEngineDefaultClusterParametersRequestPrivate &other,
                                   DescribeEngineDefaultClusterParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEngineDefaultClusterParametersRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
