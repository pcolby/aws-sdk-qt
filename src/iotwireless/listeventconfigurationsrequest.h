// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTCONFIGURATIONSREQUEST_H
#define QTAWS_LISTEVENTCONFIGURATIONSREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListEventConfigurationsRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListEventConfigurationsRequest : public IoTWirelessRequest {

public:
    ListEventConfigurationsRequest(const ListEventConfigurationsRequest &other);
    ListEventConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventConfigurationsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
