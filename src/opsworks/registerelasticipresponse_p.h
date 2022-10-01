// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERELASTICIPRESPONSE_P_H
#define QTAWS_REGISTERELASTICIPRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class RegisterElasticIpResponse;

class RegisterElasticIpResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit RegisterElasticIpResponsePrivate(RegisterElasticIpResponse * const q);

    void parseRegisterElasticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterElasticIpResponse)
    Q_DISABLE_COPY(RegisterElasticIpResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
