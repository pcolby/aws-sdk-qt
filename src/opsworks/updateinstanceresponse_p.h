// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCERESPONSE_P_H
#define QTAWS_UPDATEINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UpdateInstanceResponse;

class UpdateInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UpdateInstanceResponsePrivate(UpdateInstanceResponse * const q);

    void parseUpdateInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceResponse)
    Q_DISABLE_COPY(UpdateInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
