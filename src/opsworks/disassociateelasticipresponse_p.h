// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEELASTICIPRESPONSE_P_H
#define QTAWS_DISASSOCIATEELASTICIPRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DisassociateElasticIpResponse;

class DisassociateElasticIpResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DisassociateElasticIpResponsePrivate(DisassociateElasticIpResponse * const q);

    void parseDisassociateElasticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateElasticIpResponse)
    Q_DISABLE_COPY(DisassociateElasticIpResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
