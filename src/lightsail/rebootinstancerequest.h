// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINSTANCEREQUEST_H
#define QTAWS_REBOOTINSTANCEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class RebootInstanceRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT RebootInstanceRequest : public LightsailRequest {

public:
    RebootInstanceRequest(const RebootInstanceRequest &other);
    RebootInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootInstanceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
