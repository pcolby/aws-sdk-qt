// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPORTREQUEST_P_H
#define QTAWS_UPDATEEXPORTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updateexportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateExportRequest;

class UpdateExportRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateExportRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateExportRequest * const q);
    UpdateExportRequestPrivate(const UpdateExportRequestPrivate &other,
                                   UpdateExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateExportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
