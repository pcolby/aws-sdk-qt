// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGERECEIPTSRESPONSE_P_H
#define QTAWS_LISTPAGERECEIPTSRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class ListPageReceiptsResponse;

class ListPageReceiptsResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit ListPageReceiptsResponsePrivate(ListPageReceiptsResponse * const q);

    void parseListPageReceiptsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPageReceiptsResponse)
    Q_DISABLE_COPY(ListPageReceiptsResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
