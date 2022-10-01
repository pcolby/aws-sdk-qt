// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEACCESSREQUEST_H
#define QTAWS_GETINSTANCEACCESSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class GetInstanceAccessRequestPrivate;

class QTAWSGAMELIFT_EXPORT GetInstanceAccessRequest : public GameLiftRequest {

public:
    GetInstanceAccessRequest(const GetInstanceAccessRequest &other);
    GetInstanceAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceAccessRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
