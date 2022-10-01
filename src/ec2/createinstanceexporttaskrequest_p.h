// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEEXPORTTASKREQUEST_P_H
#define QTAWS_CREATEINSTANCEEXPORTTASKREQUEST_P_H

#include "ec2request_p.h"
#include "createinstanceexporttaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateInstanceExportTaskRequest;

class CreateInstanceExportTaskRequestPrivate : public Ec2RequestPrivate {

public:
    CreateInstanceExportTaskRequestPrivate(const Ec2Request::Action action,
                                   CreateInstanceExportTaskRequest * const q);
    CreateInstanceExportTaskRequestPrivate(const CreateInstanceExportTaskRequestPrivate &other,
                                   CreateInstanceExportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstanceExportTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
