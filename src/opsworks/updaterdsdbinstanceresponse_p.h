// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERDSDBINSTANCERESPONSE_P_H
#define QTAWS_UPDATERDSDBINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UpdateRdsDbInstanceResponse;

class UpdateRdsDbInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UpdateRdsDbInstanceResponsePrivate(UpdateRdsDbInstanceResponse * const q);

    void parseUpdateRdsDbInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRdsDbInstanceResponse)
    Q_DISABLE_COPY(UpdateRdsDbInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
