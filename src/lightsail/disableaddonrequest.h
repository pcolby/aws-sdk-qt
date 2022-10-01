// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEADDONREQUEST_H
#define QTAWS_DISABLEADDONREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DisableAddOnRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DisableAddOnRequest : public LightsailRequest {

public:
    DisableAddOnRequest(const DisableAddOnRequest &other);
    DisableAddOnRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAddOnRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
