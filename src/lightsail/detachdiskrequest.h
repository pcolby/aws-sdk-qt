// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHDISKREQUEST_H
#define QTAWS_DETACHDISKREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachDiskRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DetachDiskRequest : public LightsailRequest {

public:
    DetachDiskRequest(const DetachDiskRequest &other);
    DetachDiskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
