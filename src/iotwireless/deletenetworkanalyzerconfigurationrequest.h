// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKANALYZERCONFIGURATIONREQUEST_H
#define QTAWS_DELETENETWORKANALYZERCONFIGURATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteNetworkAnalyzerConfigurationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteNetworkAnalyzerConfigurationRequest : public IoTWirelessRequest {

public:
    DeleteNetworkAnalyzerConfigurationRequest(const DeleteNetworkAnalyzerConfigurationRequest &other);
    DeleteNetworkAnalyzerConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkAnalyzerConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
