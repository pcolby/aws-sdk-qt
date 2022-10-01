// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEREQUEST_H
#define QTAWS_DELETEINSTANCEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteInstanceRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteInstanceRequest : public LightsailRequest {

public:
    DeleteInstanceRequest(const DeleteInstanceRequest &other);
    DeleteInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
