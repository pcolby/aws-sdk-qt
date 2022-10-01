// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEUSAGEDATARESPONSE_P_H
#define QTAWS_DELETEDEVICEUSAGEDATARESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteDeviceUsageDataResponse;

class DeleteDeviceUsageDataResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteDeviceUsageDataResponsePrivate(DeleteDeviceUsageDataResponse * const q);

    void parseDeleteDeviceUsageDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceUsageDataResponse)
    Q_DISABLE_COPY(DeleteDeviceUsageDataResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
