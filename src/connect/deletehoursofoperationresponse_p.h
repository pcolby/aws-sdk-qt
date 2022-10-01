// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOURSOFOPERATIONRESPONSE_P_H
#define QTAWS_DELETEHOURSOFOPERATIONRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteHoursOfOperationResponse;

class DeleteHoursOfOperationResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteHoursOfOperationResponsePrivate(DeleteHoursOfOperationResponse * const q);

    void parseDeleteHoursOfOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHoursOfOperationResponse)
    Q_DISABLE_COPY(DeleteHoursOfOperationResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
