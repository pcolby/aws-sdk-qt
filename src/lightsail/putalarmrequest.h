// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALARMREQUEST_H
#define QTAWS_PUTALARMREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class PutAlarmRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT PutAlarmRequest : public LightsailRequest {

public:
    PutAlarmRequest(const PutAlarmRequest &other);
    PutAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAlarmRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
