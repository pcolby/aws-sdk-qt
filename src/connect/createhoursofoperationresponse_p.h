// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOURSOFOPERATIONRESPONSE_P_H
#define QTAWS_CREATEHOURSOFOPERATIONRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateHoursOfOperationResponse;

class CreateHoursOfOperationResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateHoursOfOperationResponsePrivate(CreateHoursOfOperationResponse * const q);

    void parseCreateHoursOfOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHoursOfOperationResponse)
    Q_DISABLE_COPY(CreateHoursOfOperationResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
