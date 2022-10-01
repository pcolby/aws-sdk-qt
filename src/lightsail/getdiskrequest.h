// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKREQUEST_H
#define QTAWS_GETDISKREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDiskRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetDiskRequest : public LightsailRequest {

public:
    GetDiskRequest(const GetDiskRequest &other);
    GetDiskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
