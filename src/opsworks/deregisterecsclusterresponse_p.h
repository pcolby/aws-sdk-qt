// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERECSCLUSTERRESPONSE_P_H
#define QTAWS_DEREGISTERECSCLUSTERRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterEcsClusterResponse;

class DeregisterEcsClusterResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DeregisterEcsClusterResponsePrivate(DeregisterEcsClusterResponse * const q);

    void parseDeregisterEcsClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterEcsClusterResponse)
    Q_DISABLE_COPY(DeregisterEcsClusterResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
