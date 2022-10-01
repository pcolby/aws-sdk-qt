// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERELASTICIPRESPONSE_P_H
#define QTAWS_DEREGISTERELASTICIPRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterElasticIpResponse;

class DeregisterElasticIpResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DeregisterElasticIpResponsePrivate(DeregisterElasticIpResponse * const q);

    void parseDeregisterElasticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterElasticIpResponse)
    Q_DISABLE_COPY(DeregisterElasticIpResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
