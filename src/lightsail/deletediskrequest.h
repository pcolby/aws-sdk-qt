// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISKREQUEST_H
#define QTAWS_DELETEDISKREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDiskRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteDiskRequest : public LightsailRequest {

public:
    DeleteDiskRequest(const DeleteDiskRequest &other);
    DeleteDiskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
