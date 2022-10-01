// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEREQUEST_H
#define QTAWS_STARTINSTANCEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class StartInstanceRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT StartInstanceRequest : public LightsailRequest {

public:
    StartInstanceRequest(const StartInstanceRequest &other);
    StartInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInstanceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
