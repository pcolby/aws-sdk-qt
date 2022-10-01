// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNINSTANCERESPONSE_P_H
#define QTAWS_UNASSIGNINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UnassignInstanceResponse;

class UnassignInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UnassignInstanceResponsePrivate(UnassignInstanceResponse * const q);

    void parseUnassignInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnassignInstanceResponse)
    Q_DISABLE_COPY(UnassignInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
