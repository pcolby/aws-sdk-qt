// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEASSOCIATIONSTATUSREQUEST_P_H
#define QTAWS_DESCRIBENODEASSOCIATIONSTATUSREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "describenodeassociationstatusrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeNodeAssociationStatusRequest;

class DescribeNodeAssociationStatusRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    DescribeNodeAssociationStatusRequestPrivate(const OpsWorksCmRequest::Action action,
                                   DescribeNodeAssociationStatusRequest * const q);
    DescribeNodeAssociationStatusRequestPrivate(const DescribeNodeAssociationStatusRequestPrivate &other,
                                   DescribeNodeAssociationStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNodeAssociationStatusRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
