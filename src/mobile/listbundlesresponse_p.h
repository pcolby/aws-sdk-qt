// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUNDLESRESPONSE_P_H
#define QTAWS_LISTBUNDLESRESPONSE_P_H

#include "mobileresponse_p.h"

namespace QtAws {
namespace Mobile {

class ListBundlesResponse;

class ListBundlesResponsePrivate : public MobileResponsePrivate {

public:

    explicit ListBundlesResponsePrivate(ListBundlesResponse * const q);

    void parseListBundlesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBundlesResponse)
    Q_DISABLE_COPY(ListBundlesResponsePrivate)

};

} // namespace Mobile
} // namespace QtAws

#endif
