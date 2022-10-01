// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFOLDERMEMBERSHIPREQUEST_H
#define QTAWS_CREATEFOLDERMEMBERSHIPREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateFolderMembershipRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateFolderMembershipRequest : public QuickSightRequest {

public:
    CreateFolderMembershipRequest(const CreateFolderMembershipRequest &other);
    CreateFolderMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFolderMembershipRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
