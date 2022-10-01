// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGETSMARTHOMEAPPLIANCESRESPONSE_P_H
#define QTAWS_FORGETSMARTHOMEAPPLIANCESRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ForgetSmartHomeAppliancesResponse;

class ForgetSmartHomeAppliancesResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ForgetSmartHomeAppliancesResponsePrivate(ForgetSmartHomeAppliancesResponse * const q);

    void parseForgetSmartHomeAppliancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ForgetSmartHomeAppliancesResponse)
    Q_DISABLE_COPY(ForgetSmartHomeAppliancesResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
