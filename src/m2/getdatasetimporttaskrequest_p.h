// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETIMPORTTASKREQUEST_P_H
#define QTAWS_GETDATASETIMPORTTASKREQUEST_P_H

#include "m2request_p.h"
#include "getdatasetimporttaskrequest.h"

namespace QtAws {
namespace M2 {

class GetDataSetImportTaskRequest;

class GetDataSetImportTaskRequestPrivate : public M2RequestPrivate {

public:
    GetDataSetImportTaskRequestPrivate(const M2Request::Action action,
                                   GetDataSetImportTaskRequest * const q);
    GetDataSetImportTaskRequestPrivate(const GetDataSetImportTaskRequestPrivate &other,
                                   GetDataSetImportTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataSetImportTaskRequest)

};

} // namespace M2
} // namespace QtAws

#endif
