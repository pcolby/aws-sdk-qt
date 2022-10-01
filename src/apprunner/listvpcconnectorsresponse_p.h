// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCCONNECTORSRESPONSE_P_H
#define QTAWS_LISTVPCCONNECTORSRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class ListVpcConnectorsResponse;

class ListVpcConnectorsResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit ListVpcConnectorsResponsePrivate(ListVpcConnectorsResponse * const q);

    void parseListVpcConnectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVpcConnectorsResponse)
    Q_DISABLE_COPY(ListVpcConnectorsResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
