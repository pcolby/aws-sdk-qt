// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALARMSREQUEST_H
#define QTAWS_GETALARMSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetAlarmsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetAlarmsRequest : public LightsailRequest {

public:
    GetAlarmsRequest(const GetAlarmsRequest &other);
    GetAlarmsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAlarmsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
