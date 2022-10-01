// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEELASTICIPRESPONSE_P_H
#define QTAWS_UPDATEELASTICIPRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UpdateElasticIpResponse;

class UpdateElasticIpResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UpdateElasticIpResponsePrivate(UpdateElasticIpResponse * const q);

    void parseUpdateElasticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateElasticIpResponse)
    Q_DISABLE_COPY(UpdateElasticIpResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
