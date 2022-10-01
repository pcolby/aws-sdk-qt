// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREMOTEACCESSSESSIONREQUEST_H
#define QTAWS_CREATEREMOTEACCESSSESSIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateRemoteAccessSessionRequestPrivate;

class QTAWSDEVICEFARM_EXPORT CreateRemoteAccessSessionRequest : public DeviceFarmRequest {

public:
    CreateRemoteAccessSessionRequest(const CreateRemoteAccessSessionRequest &other);
    CreateRemoteAccessSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
