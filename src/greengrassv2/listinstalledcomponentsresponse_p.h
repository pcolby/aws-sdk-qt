// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTALLEDCOMPONENTSRESPONSE_P_H
#define QTAWS_LISTINSTALLEDCOMPONENTSRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class ListInstalledComponentsResponse;

class ListInstalledComponentsResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit ListInstalledComponentsResponsePrivate(ListInstalledComponentsResponse * const q);

    void parseListInstalledComponentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstalledComponentsResponse)
    Q_DISABLE_COPY(ListInstalledComponentsResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
