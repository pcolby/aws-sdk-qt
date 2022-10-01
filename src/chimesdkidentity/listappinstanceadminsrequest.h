// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEADMINSREQUEST_H
#define QTAWS_LISTAPPINSTANCEADMINSREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceAdminsRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT ListAppInstanceAdminsRequest : public ChimeSdkIdentityRequest {

public:
    ListAppInstanceAdminsRequest(const ListAppInstanceAdminsRequest &other);
    ListAppInstanceAdminsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstanceAdminsRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
