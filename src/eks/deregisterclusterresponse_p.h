// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCLUSTERRESPONSE_P_H
#define QTAWS_DEREGISTERCLUSTERRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DeregisterClusterResponse;

class DeregisterClusterResponsePrivate : public EksResponsePrivate {

public:

    explicit DeregisterClusterResponsePrivate(DeregisterClusterResponse * const q);

    void parseDeregisterClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterClusterResponse)
    Q_DISABLE_COPY(DeregisterClusterResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
