// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGETSMARTHOMEAPPLIANCESREQUEST_P_H
#define QTAWS_FORGETSMARTHOMEAPPLIANCESREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "forgetsmarthomeappliancesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ForgetSmartHomeAppliancesRequest;

class ForgetSmartHomeAppliancesRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ForgetSmartHomeAppliancesRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ForgetSmartHomeAppliancesRequest * const q);
    ForgetSmartHomeAppliancesRequestPrivate(const ForgetSmartHomeAppliancesRequestPrivate &other,
                                   ForgetSmartHomeAppliancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ForgetSmartHomeAppliancesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
