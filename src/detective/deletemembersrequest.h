// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERSREQUEST_H
#define QTAWS_DELETEMEMBERSREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class DeleteMembersRequestPrivate;

class QTAWSDETECTIVE_EXPORT DeleteMembersRequest : public DetectiveRequest {

public:
    DeleteMembersRequest(const DeleteMembersRequest &other);
    DeleteMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMembersRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
