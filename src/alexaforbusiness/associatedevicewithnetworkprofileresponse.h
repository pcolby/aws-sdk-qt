// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHNETWORKPROFILERESPONSE_H
#define QTAWS_ASSOCIATEDEVICEWITHNETWORKPROFILERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "associatedevicewithnetworkprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateDeviceWithNetworkProfileResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateDeviceWithNetworkProfileResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    AssociateDeviceWithNetworkProfileResponse(const AssociateDeviceWithNetworkProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDeviceWithNetworkProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDeviceWithNetworkProfileResponse)
    Q_DISABLE_COPY(AssociateDeviceWithNetworkProfileResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
