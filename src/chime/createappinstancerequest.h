// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEREQUEST_H
#define QTAWS_CREATEAPPINSTANCEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateAppInstanceRequestPrivate;

class QTAWSCHIME_EXPORT CreateAppInstanceRequest : public ChimeRequest {

public:
    CreateAppInstanceRequest(const CreateAppInstanceRequest &other);
    CreateAppInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppInstanceRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
