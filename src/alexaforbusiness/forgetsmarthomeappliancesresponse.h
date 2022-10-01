// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGETSMARTHOMEAPPLIANCESRESPONSE_H
#define QTAWS_FORGETSMARTHOMEAPPLIANCESRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "forgetsmarthomeappliancesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ForgetSmartHomeAppliancesResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ForgetSmartHomeAppliancesResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ForgetSmartHomeAppliancesResponse(const ForgetSmartHomeAppliancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ForgetSmartHomeAppliancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ForgetSmartHomeAppliancesResponse)
    Q_DISABLE_COPY(ForgetSmartHomeAppliancesResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
