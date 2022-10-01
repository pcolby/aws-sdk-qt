// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTREQUEST_P_H
#define QTAWS_CREATEEXPORTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createexportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateExportRequest;

class CreateExportRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateExportRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateExportRequest * const q);
    CreateExportRequestPrivate(const CreateExportRequestPrivate &other,
                                   CreateExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
