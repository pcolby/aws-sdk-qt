// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSREQUEST_P_H

#include "neptunerequest_p.h"
#include "describeenginedefaultparametersrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeEngineDefaultParametersRequest;

class DescribeEngineDefaultParametersRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeEngineDefaultParametersRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeEngineDefaultParametersRequest * const q);
    DescribeEngineDefaultParametersRequestPrivate(const DescribeEngineDefaultParametersRequestPrivate &other,
                                   DescribeEngineDefaultParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEngineDefaultParametersRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
