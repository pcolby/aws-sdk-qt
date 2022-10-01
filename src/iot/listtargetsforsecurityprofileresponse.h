// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORSECURITYPROFILERESPONSE_H
#define QTAWS_LISTTARGETSFORSECURITYPROFILERESPONSE_H

#include "iotresponse.h"
#include "listtargetsforsecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class ListTargetsForSecurityProfileResponsePrivate;

class QTAWSIOT_EXPORT ListTargetsForSecurityProfileResponse : public IoTResponse {
    Q_OBJECT

public:
    ListTargetsForSecurityProfileResponse(const ListTargetsForSecurityProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTargetsForSecurityProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetsForSecurityProfileResponse)
    Q_DISABLE_COPY(ListTargetsForSecurityProfileResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
