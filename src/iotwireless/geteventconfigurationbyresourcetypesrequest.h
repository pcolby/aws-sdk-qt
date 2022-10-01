// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTCONFIGURATIONBYRESOURCETYPESREQUEST_H
#define QTAWS_GETEVENTCONFIGURATIONBYRESOURCETYPESREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetEventConfigurationByResourceTypesRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetEventConfigurationByResourceTypesRequest : public IoTWirelessRequest {

public:
    GetEventConfigurationByResourceTypesRequest(const GetEventConfigurationByResourceTypesRequest &other);
    GetEventConfigurationByResourceTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventConfigurationByResourceTypesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
