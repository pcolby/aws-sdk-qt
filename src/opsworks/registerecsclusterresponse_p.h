// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERECSCLUSTERRESPONSE_P_H
#define QTAWS_REGISTERECSCLUSTERRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class RegisterEcsClusterResponse;

class RegisterEcsClusterResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit RegisterEcsClusterResponsePrivate(RegisterEcsClusterResponse * const q);

    void parseRegisterEcsClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterEcsClusterResponse)
    Q_DISABLE_COPY(RegisterEcsClusterResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
