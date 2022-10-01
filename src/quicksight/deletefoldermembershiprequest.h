// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERMEMBERSHIPREQUEST_H
#define QTAWS_DELETEFOLDERMEMBERSHIPREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteFolderMembershipRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteFolderMembershipRequest : public QuickSightRequest {

public:
    DeleteFolderMembershipRequest(const DeleteFolderMembershipRequest &other);
    DeleteFolderMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFolderMembershipRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
