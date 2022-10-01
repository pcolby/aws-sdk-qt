// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSREQUEST_H
#define QTAWS_GETDISKSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDisksRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetDisksRequest : public LightsailRequest {

public:
    GetDisksRequest(const GetDisksRequest &other);
    GetDisksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDisksRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
