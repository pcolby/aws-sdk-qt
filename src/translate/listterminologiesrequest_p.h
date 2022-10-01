// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTERMINOLOGIESREQUEST_P_H
#define QTAWS_LISTTERMINOLOGIESREQUEST_P_H

#include "translaterequest_p.h"
#include "listterminologiesrequest.h"

namespace QtAws {
namespace Translate {

class ListTerminologiesRequest;

class ListTerminologiesRequestPrivate : public TranslateRequestPrivate {

public:
    ListTerminologiesRequestPrivate(const TranslateRequest::Action action,
                                   ListTerminologiesRequest * const q);
    ListTerminologiesRequestPrivate(const ListTerminologiesRequestPrivate &other,
                                   ListTerminologiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTerminologiesRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
