// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLECOLUMNSREQUEST_P_H
#define QTAWS_LISTTABLECOLUMNSREQUEST_P_H

#include "honeycoderequest_p.h"
#include "listtablecolumnsrequest.h"

namespace QtAws {
namespace Honeycode {

class ListTableColumnsRequest;

class ListTableColumnsRequestPrivate : public HoneycodeRequestPrivate {

public:
    ListTableColumnsRequestPrivate(const HoneycodeRequest::Action action,
                                   ListTableColumnsRequest * const q);
    ListTableColumnsRequestPrivate(const ListTableColumnsRequestPrivate &other,
                                   ListTableColumnsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTableColumnsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
