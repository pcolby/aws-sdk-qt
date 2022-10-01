// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGLEVELSBYRESOURCETYPESREQUEST_H
#define QTAWS_GETLOGLEVELSBYRESOURCETYPESREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetLogLevelsByResourceTypesRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetLogLevelsByResourceTypesRequest : public IoTWirelessRequest {

public:
    GetLogLevelsByResourceTypesRequest(const GetLogLevelsByResourceTypesRequest &other);
    GetLogLevelsByResourceTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLogLevelsByResourceTypesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
