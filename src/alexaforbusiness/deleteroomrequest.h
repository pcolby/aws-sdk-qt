// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMREQUEST_H
#define QTAWS_DELETEROOMREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteRoomRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteRoomRequest : public AlexaForBusinessRequest {

public:
    DeleteRoomRequest(const DeleteRoomRequest &other);
    DeleteRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
