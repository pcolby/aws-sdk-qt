// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTCONFIGURATIONBYRESOURCETYPESRESPONSE_H
#define QTAWS_GETEVENTCONFIGURATIONBYRESOURCETYPESRESPONSE_H

#include "iotwirelessresponse.h"
#include "geteventconfigurationbyresourcetypesrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetEventConfigurationByResourceTypesResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetEventConfigurationByResourceTypesResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetEventConfigurationByResourceTypesResponse(const GetEventConfigurationByResourceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventConfigurationByResourceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventConfigurationByResourceTypesResponse)
    Q_DISABLE_COPY(GetEventConfigurationByResourceTypesResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
