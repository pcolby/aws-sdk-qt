// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKANALYZERCONFIGURATIONREQUEST_H
#define QTAWS_GETNETWORKANALYZERCONFIGURATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetNetworkAnalyzerConfigurationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetNetworkAnalyzerConfigurationRequest : public IoTWirelessRequest {

public:
    GetNetworkAnalyzerConfigurationRequest(const GetNetworkAnalyzerConfigurationRequest &other);
    GetNetworkAnalyzerConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkAnalyzerConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
