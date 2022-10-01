// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEADDONREQUEST_H
#define QTAWS_ENABLEADDONREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class EnableAddOnRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT EnableAddOnRequest : public LightsailRequest {

public:
    EnableAddOnRequest(const EnableAddOnRequest &other);
    EnableAddOnRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAddOnRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
