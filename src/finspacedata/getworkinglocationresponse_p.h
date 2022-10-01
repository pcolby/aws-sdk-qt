// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKINGLOCATIONRESPONSE_P_H
#define QTAWS_GETWORKINGLOCATIONRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class GetWorkingLocationResponse;

class GetWorkingLocationResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit GetWorkingLocationResponsePrivate(GetWorkingLocationResponse * const q);

    void parseGetWorkingLocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkingLocationResponse)
    Q_DISABLE_COPY(GetWorkingLocationResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
