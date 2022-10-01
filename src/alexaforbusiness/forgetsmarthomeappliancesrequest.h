// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGETSMARTHOMEAPPLIANCESREQUEST_H
#define QTAWS_FORGETSMARTHOMEAPPLIANCESREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ForgetSmartHomeAppliancesRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ForgetSmartHomeAppliancesRequest : public AlexaForBusinessRequest {

public:
    ForgetSmartHomeAppliancesRequest(const ForgetSmartHomeAppliancesRequest &other);
    ForgetSmartHomeAppliancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ForgetSmartHomeAppliancesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
