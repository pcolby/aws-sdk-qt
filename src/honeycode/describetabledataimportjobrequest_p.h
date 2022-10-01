// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEDATAIMPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBETABLEDATAIMPORTJOBREQUEST_P_H

#include "honeycoderequest_p.h"
#include "describetabledataimportjobrequest.h"

namespace QtAws {
namespace Honeycode {

class DescribeTableDataImportJobRequest;

class DescribeTableDataImportJobRequestPrivate : public HoneycodeRequestPrivate {

public:
    DescribeTableDataImportJobRequestPrivate(const HoneycodeRequest::Action action,
                                   DescribeTableDataImportJobRequest * const q);
    DescribeTableDataImportJobRequestPrivate(const DescribeTableDataImportJobRequestPrivate &other,
                                   DescribeTableDataImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTableDataImportJobRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
