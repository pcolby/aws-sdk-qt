// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOMSREQUEST_H
#define QTAWS_LISTROOMSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListRoomsRequestPrivate;

class QTAWSCHIME_EXPORT ListRoomsRequest : public ChimeRequest {

public:
    ListRoomsRequest(const ListRoomsRequest &other);
    ListRoomsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoomsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
