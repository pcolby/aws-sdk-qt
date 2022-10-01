// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERRESPONSE_P_H
#define QTAWS_DELETECLUSTERRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class DeleteClusterResponse;

class DeleteClusterResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit DeleteClusterResponsePrivate(DeleteClusterResponse * const q);

    void parseDeleteClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClusterResponse)
    Q_DISABLE_COPY(DeleteClusterResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
