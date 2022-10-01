// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMREQUEST_H
#define QTAWS_DELETEROOMREQUEST_H

#include "ivschatrequest.h"

namespace QtAws {
namespace IvsChat {

class DeleteRoomRequestPrivate;

class QTAWSIVSCHAT_EXPORT DeleteRoomRequest : public IvsChatRequest {

public:
    DeleteRoomRequest(const DeleteRoomRequest &other);
    DeleteRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoomRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
