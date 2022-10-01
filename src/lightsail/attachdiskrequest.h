// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHDISKREQUEST_H
#define QTAWS_ATTACHDISKREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachDiskRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT AttachDiskRequest : public LightsailRequest {

public:
    AttachDiskRequest(const AttachDiskRequest &other);
    AttachDiskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
