// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERRDSDBINSTANCERESPONSE_P_H
#define QTAWS_REGISTERRDSDBINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class RegisterRdsDbInstanceResponse;

class RegisterRdsDbInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit RegisterRdsDbInstanceResponsePrivate(RegisterRdsDbInstanceResponse * const q);

    void parseRegisterRdsDbInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterRdsDbInstanceResponse)
    Q_DISABLE_COPY(RegisterRdsDbInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
