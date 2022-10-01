// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINSTANCEREQUEST_H
#define QTAWS_STOPINSTANCEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class StopInstanceRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT StopInstanceRequest : public LightsailRequest {

public:
    StopInstanceRequest(const StopInstanceRequest &other);
    StopInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopInstanceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
