// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOUNTTARGETSREQUEST_P_H
#define QTAWS_DESCRIBEMOUNTTARGETSREQUEST_P_H

#include "efsrequest_p.h"
#include "describemounttargetsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeMountTargetsRequest;

class DescribeMountTargetsRequestPrivate : public EfsRequestPrivate {

public:
    DescribeMountTargetsRequestPrivate(const EfsRequest::Action action,
                                   DescribeMountTargetsRequest * const q);
    DescribeMountTargetsRequestPrivate(const DescribeMountTargetsRequestPrivate &other,
                                   DescribeMountTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMountTargetsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
