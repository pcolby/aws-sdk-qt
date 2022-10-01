// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREINVITATIONSREQUEST_H
#define QTAWS_LISTSHAREINVITATIONSREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListShareInvitationsRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ListShareInvitationsRequest : public WellArchitectedRequest {

public:
    ListShareInvitationsRequest(const ListShareInvitationsRequest &other);
    ListShareInvitationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListShareInvitationsRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
