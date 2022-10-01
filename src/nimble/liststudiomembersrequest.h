// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOMEMBERSREQUEST_H
#define QTAWS_LISTSTUDIOMEMBERSREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class ListStudioMembersRequestPrivate;

class QTAWSNIMBLE_EXPORT ListStudioMembersRequest : public NimbleRequest {

public:
    ListStudioMembersRequest(const ListStudioMembersRequest &other);
    ListStudioMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudioMembersRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
