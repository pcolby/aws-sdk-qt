// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREMOTEACCESSSESSIONSREQUEST_H
#define QTAWS_LISTREMOTEACCESSSESSIONSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListRemoteAccessSessionsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListRemoteAccessSessionsRequest : public DeviceFarmRequest {

public:
    ListRemoteAccessSessionsRequest(const ListRemoteAccessSessionsRequest &other);
    ListRemoteAccessSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRemoteAccessSessionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
