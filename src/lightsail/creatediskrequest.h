// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKREQUEST_H
#define QTAWS_CREATEDISKREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateDiskRequest : public LightsailRequest {

public:
    CreateDiskRequest(const CreateDiskRequest &other);
    CreateDiskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
