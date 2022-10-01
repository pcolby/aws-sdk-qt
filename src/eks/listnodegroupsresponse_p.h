// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODEGROUPSRESPONSE_P_H
#define QTAWS_LISTNODEGROUPSRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class ListNodegroupsResponse;

class ListNodegroupsResponsePrivate : public EksResponsePrivate {

public:

    explicit ListNodegroupsResponsePrivate(ListNodegroupsResponse * const q);

    void parseListNodegroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNodegroupsResponse)
    Q_DISABLE_COPY(ListNodegroupsResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
