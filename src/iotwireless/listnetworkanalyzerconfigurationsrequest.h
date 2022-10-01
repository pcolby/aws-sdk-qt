// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKANALYZERCONFIGURATIONSREQUEST_H
#define QTAWS_LISTNETWORKANALYZERCONFIGURATIONSREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListNetworkAnalyzerConfigurationsRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListNetworkAnalyzerConfigurationsRequest : public IoTWirelessRequest {

public:
    ListNetworkAnalyzerConfigurationsRequest(const ListNetworkAnalyzerConfigurationsRequest &other);
    ListNetworkAnalyzerConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkAnalyzerConfigurationsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
