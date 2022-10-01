// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEUSERREQUEST_H
#define QTAWS_UPDATEAPPINSTANCEUSERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateAppInstanceUserRequestPrivate;

class QTAWSCHIME_EXPORT UpdateAppInstanceUserRequest : public ChimeRequest {

public:
    UpdateAppInstanceUserRequest(const UpdateAppInstanceUserRequest &other);
    UpdateAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
