// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERSREQUEST_H
#define QTAWS_PUTUSERSREQUEST_H

#include "personalizeeventsrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutUsersRequestPrivate;

class QTAWSPERSONALIZEEVENTS_EXPORT PutUsersRequest : public PersonalizeEventsRequest {

public:
    PutUsersRequest(const PutUsersRequest &other);
    PutUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutUsersRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
