// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPORTREQUEST_P_H
#define QTAWS_DELETEEXPORTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deleteexportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteExportRequest;

class DeleteExportRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteExportRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteExportRequest * const q);
    DeleteExportRequestPrivate(const DeleteExportRequestPrivate &other,
                                   DeleteExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
