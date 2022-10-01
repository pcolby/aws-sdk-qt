// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMOTEACCESSSESSIONREQUEST_H
#define QTAWS_DELETEREMOTEACCESSSESSIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteRemoteAccessSessionRequestPrivate;

class QTAWSDEVICEFARM_EXPORT DeleteRemoteAccessSessionRequest : public DeviceFarmRequest {

public:
    DeleteRemoteAccessSessionRequest(const DeleteRemoteAccessSessionRequest &other);
    DeleteRemoteAccessSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
