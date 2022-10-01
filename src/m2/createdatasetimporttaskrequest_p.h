// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETIMPORTTASKREQUEST_P_H
#define QTAWS_CREATEDATASETIMPORTTASKREQUEST_P_H

#include "m2request_p.h"
#include "createdatasetimporttaskrequest.h"

namespace QtAws {
namespace M2 {

class CreateDataSetImportTaskRequest;

class CreateDataSetImportTaskRequestPrivate : public M2RequestPrivate {

public:
    CreateDataSetImportTaskRequestPrivate(const M2Request::Action action,
                                   CreateDataSetImportTaskRequest * const q);
    CreateDataSetImportTaskRequestPrivate(const CreateDataSetImportTaskRequestPrivate &other,
                                   CreateDataSetImportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSetImportTaskRequest)

};

} // namespace M2
} // namespace QtAws

#endif
