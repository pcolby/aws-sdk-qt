// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCERESPONSE_P_H
#define QTAWS_REGISTERINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class RegisterInstanceResponse;

class RegisterInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit RegisterInstanceResponsePrivate(RegisterInstanceResponse * const q);

    void parseRegisterInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterInstanceResponse)
    Q_DISABLE_COPY(RegisterInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
