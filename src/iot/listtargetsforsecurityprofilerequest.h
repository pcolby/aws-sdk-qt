// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORSECURITYPROFILEREQUEST_H
#define QTAWS_LISTTARGETSFORSECURITYPROFILEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListTargetsForSecurityProfileRequestPrivate;

class QTAWSIOT_EXPORT ListTargetsForSecurityProfileRequest : public IoTRequest {

public:
    ListTargetsForSecurityProfileRequest(const ListTargetsForSecurityProfileRequest &other);
    ListTargetsForSecurityProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetsForSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
