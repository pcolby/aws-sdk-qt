// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSITEMRELATEDITEMSRESPONSE_P_H
#define QTAWS_LISTOPSITEMRELATEDITEMSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListOpsItemRelatedItemsResponse;

class ListOpsItemRelatedItemsResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListOpsItemRelatedItemsResponsePrivate(ListOpsItemRelatedItemsResponse * const q);

    void parseListOpsItemRelatedItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOpsItemRelatedItemsResponse)
    Q_DISABLE_COPY(ListOpsItemRelatedItemsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
