// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERSREQUEST_H
#define QTAWS_GETMEMBERSREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class GetMembersRequestPrivate;

class QTAWSDETECTIVE_EXPORT GetMembersRequest : public DetectiveRequest {

public:
    GetMembersRequest(const GetMembersRequest &other);
    GetMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMembersRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
