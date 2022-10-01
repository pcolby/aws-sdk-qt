// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCREATEACCOUNTSTATUSRESPONSE_P_H
#define QTAWS_LISTCREATEACCOUNTSTATUSRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListCreateAccountStatusResponse;

class ListCreateAccountStatusResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListCreateAccountStatusResponsePrivate(ListCreateAccountStatusResponse * const q);

    void parseListCreateAccountStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCreateAccountStatusResponse)
    Q_DISABLE_COPY(ListCreateAccountStatusResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
