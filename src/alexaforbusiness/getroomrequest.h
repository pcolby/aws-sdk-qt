// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMREQUEST_H
#define QTAWS_GETROOMREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetRoomRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetRoomRequest : public AlexaForBusinessRequest {

public:
    GetRoomRequest(const GetRoomRequest &other);
    GetRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
