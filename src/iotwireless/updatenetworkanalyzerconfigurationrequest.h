// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKANALYZERCONFIGURATIONREQUEST_H
#define QTAWS_UPDATENETWORKANALYZERCONFIGURATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateNetworkAnalyzerConfigurationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateNetworkAnalyzerConfigurationRequest : public IoTWirelessRequest {

public:
    UpdateNetworkAnalyzerConfigurationRequest(const UpdateNetworkAnalyzerConfigurationRequest &other);
    UpdateNetworkAnalyzerConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkAnalyzerConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
