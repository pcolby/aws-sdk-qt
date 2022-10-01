// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMDATAIDENTIFIERSRESPONSE_P_H
#define QTAWS_LISTCUSTOMDATAIDENTIFIERSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class ListCustomDataIdentifiersResponse;

class ListCustomDataIdentifiersResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit ListCustomDataIdentifiersResponsePrivate(ListCustomDataIdentifiersResponse * const q);

    void parseListCustomDataIdentifiersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomDataIdentifiersResponse)
    Q_DISABLE_COPY(ListCustomDataIdentifiersResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
