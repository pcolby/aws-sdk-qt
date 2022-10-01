// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTREQUEST_P_H
#define QTAWS_STARTIMPORTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "startimportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class StartImportRequest;

class StartImportRequestPrivate : public LexModelsV2RequestPrivate {

public:
    StartImportRequestPrivate(const LexModelsV2Request::Action action,
                                   StartImportRequest * const q);
    StartImportRequestPrivate(const StartImportRequestPrivate &other,
                                   StartImportRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartImportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
