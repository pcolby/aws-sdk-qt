// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTCONFIGURATIONBYRESOURCETYPESRESPONSE_H
#define QTAWS_UPDATEEVENTCONFIGURATIONBYRESOURCETYPESRESPONSE_H

#include "iotwirelessresponse.h"
#include "updateeventconfigurationbyresourcetypesrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateEventConfigurationByResourceTypesResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateEventConfigurationByResourceTypesResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdateEventConfigurationByResourceTypesResponse(const UpdateEventConfigurationByResourceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventConfigurationByResourceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventConfigurationByResourceTypesResponse)
    Q_DISABLE_COPY(UpdateEventConfigurationByResourceTypesResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
