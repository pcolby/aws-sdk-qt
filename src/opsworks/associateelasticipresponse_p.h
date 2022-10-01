// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEELASTICIPRESPONSE_P_H
#define QTAWS_ASSOCIATEELASTICIPRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class AssociateElasticIpResponse;

class AssociateElasticIpResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit AssociateElasticIpResponsePrivate(AssociateElasticIpResponse * const q);

    void parseAssociateElasticIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateElasticIpResponse)
    Q_DISABLE_COPY(AssociateElasticIpResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
