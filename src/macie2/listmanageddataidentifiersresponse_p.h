// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDDATAIDENTIFIERSRESPONSE_P_H
#define QTAWS_LISTMANAGEDDATAIDENTIFIERSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class ListManagedDataIdentifiersResponse;

class ListManagedDataIdentifiersResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit ListManagedDataIdentifiersResponsePrivate(ListManagedDataIdentifiersResponse * const q);

    void parseListManagedDataIdentifiersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListManagedDataIdentifiersResponse)
    Q_DISABLE_COPY(ListManagedDataIdentifiersResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
