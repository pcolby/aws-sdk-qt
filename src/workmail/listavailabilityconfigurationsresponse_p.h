// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABILITYCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTAVAILABILITYCONFIGURATIONSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListAvailabilityConfigurationsResponse;

class ListAvailabilityConfigurationsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListAvailabilityConfigurationsResponsePrivate(ListAvailabilityConfigurationsResponse * const q);

    void parseListAvailabilityConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAvailabilityConfigurationsResponse)
    Q_DISABLE_COPY(ListAvailabilityConfigurationsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
