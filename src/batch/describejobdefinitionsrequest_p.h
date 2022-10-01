// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBDEFINITIONSREQUEST_P_H
#define QTAWS_DESCRIBEJOBDEFINITIONSREQUEST_P_H

#include "batchrequest_p.h"
#include "describejobdefinitionsrequest.h"

namespace QtAws {
namespace Batch {

class DescribeJobDefinitionsRequest;

class DescribeJobDefinitionsRequestPrivate : public BatchRequestPrivate {

public:
    DescribeJobDefinitionsRequestPrivate(const BatchRequest::Action action,
                                   DescribeJobDefinitionsRequest * const q);
    DescribeJobDefinitionsRequestPrivate(const DescribeJobDefinitionsRequestPrivate &other,
                                   DescribeJobDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobDefinitionsRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
