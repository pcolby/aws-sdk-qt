// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELIMPORTTASKREQUEST_P_H
#define QTAWS_CANCELIMPORTTASKREQUEST_P_H

#include "ec2request_p.h"
#include "cancelimporttaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelImportTaskRequest;

class CancelImportTaskRequestPrivate : public Ec2RequestPrivate {

public:
    CancelImportTaskRequestPrivate(const Ec2Request::Action action,
                                   CancelImportTaskRequest * const q);
    CancelImportTaskRequestPrivate(const CancelImportTaskRequestPrivate &other,
                                   CancelImportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelImportTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
