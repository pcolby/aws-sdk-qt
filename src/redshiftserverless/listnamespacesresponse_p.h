// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMESPACESRESPONSE_P_H
#define QTAWS_LISTNAMESPACESRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class ListNamespacesResponse;

class ListNamespacesResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit ListNamespacesResponsePrivate(ListNamespacesResponse * const q);

    void parseListNamespacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNamespacesResponse)
    Q_DISABLE_COPY(ListNamespacesResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
