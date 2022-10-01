// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGESBYENGAGEMENTRESPONSE_P_H
#define QTAWS_LISTPAGESBYENGAGEMENTRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class ListPagesByEngagementResponse;

class ListPagesByEngagementResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit ListPagesByEngagementResponsePrivate(ListPagesByEngagementResponse * const q);

    void parseListPagesByEngagementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPagesByEngagementResponse)
    Q_DISABLE_COPY(ListPagesByEngagementResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
