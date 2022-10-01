// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEREQUEST_H
#define QTAWS_UPDATEAPPINSTANCEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateAppInstanceRequestPrivate;

class QTAWSCHIME_EXPORT UpdateAppInstanceRequest : public ChimeRequest {

public:
    UpdateAppInstanceRequest(const UpdateAppInstanceRequest &other);
    UpdateAppInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppInstanceRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
