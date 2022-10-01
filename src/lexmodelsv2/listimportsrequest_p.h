// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTSREQUEST_P_H
#define QTAWS_LISTIMPORTSREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listimportsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListImportsRequest;

class ListImportsRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListImportsRequestPrivate(const LexModelsV2Request::Action action,
                                   ListImportsRequest * const q);
    ListImportsRequestPrivate(const ListImportsRequestPrivate &other,
                                   ListImportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImportsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
