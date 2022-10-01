// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELEXPORTTASKREQUEST_P_H
#define QTAWS_CANCELEXPORTTASKREQUEST_P_H

#include "ec2request_p.h"
#include "cancelexporttaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelExportTaskRequest;

class CancelExportTaskRequestPrivate : public Ec2RequestPrivate {

public:
    CancelExportTaskRequestPrivate(const Ec2Request::Action action,
                                   CancelExportTaskRequest * const q);
    CancelExportTaskRequestPrivate(const CancelExportTaskRequestPrivate &other,
                                   CancelExportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelExportTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
