// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMPORTREQUEST_P_H
#define QTAWS_DELETEIMPORTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deleteimportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteImportRequest;

class DeleteImportRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteImportRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteImportRequest * const q);
    DeleteImportRequestPrivate(const DeleteImportRequestPrivate &other,
                                   DeleteImportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
