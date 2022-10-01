// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCEPACKAGESRESPONSE_P_H
#define QTAWS_LISTDATASOURCEPACKAGESRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class ListDatasourcePackagesResponse;

class ListDatasourcePackagesResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit ListDatasourcePackagesResponsePrivate(ListDatasourcePackagesResponse * const q);

    void parseListDatasourcePackagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatasourcePackagesResponse)
    Q_DISABLE_COPY(ListDatasourcePackagesResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
