// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGINGACCOUNTSRESPONSE_P_H
#define QTAWS_LISTSTAGINGACCOUNTSRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class ListStagingAccountsResponse;

class ListStagingAccountsResponsePrivate : public DrsResponsePrivate {

public:

    explicit ListStagingAccountsResponsePrivate(ListStagingAccountsResponse * const q);

    void parseListStagingAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStagingAccountsResponse)
    Q_DISABLE_COPY(ListStagingAccountsResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
