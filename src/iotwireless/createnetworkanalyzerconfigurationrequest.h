// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKANALYZERCONFIGURATIONREQUEST_H
#define QTAWS_CREATENETWORKANALYZERCONFIGURATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateNetworkAnalyzerConfigurationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT CreateNetworkAnalyzerConfigurationRequest : public IoTWirelessRequest {

public:
    CreateNetworkAnalyzerConfigurationRequest(const CreateNetworkAnalyzerConfigurationRequest &other);
    CreateNetworkAnalyzerConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkAnalyzerConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
