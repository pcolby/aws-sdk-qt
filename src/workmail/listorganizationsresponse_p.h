// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONSRESPONSE_P_H
#define QTAWS_LISTORGANIZATIONSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListOrganizationsResponse;

class ListOrganizationsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListOrganizationsResponsePrivate(ListOrganizationsResponse * const q);

    void parseListOrganizationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOrganizationsResponse)
    Q_DISABLE_COPY(ListOrganizationsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
