// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOMSREQUEST_H
#define QTAWS_LISTROOMSREQUEST_H

#include "ivschatrequest.h"

namespace QtAws {
namespace IvsChat {

class ListRoomsRequestPrivate;

class QTAWSIVSCHAT_EXPORT ListRoomsRequest : public IvsChatRequest {

public:
    ListRoomsRequest(const ListRoomsRequest &other);
    ListRoomsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoomsRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
