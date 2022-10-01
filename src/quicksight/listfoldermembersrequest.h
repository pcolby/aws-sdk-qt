// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFOLDERMEMBERSREQUEST_H
#define QTAWS_LISTFOLDERMEMBERSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListFolderMembersRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListFolderMembersRequest : public QuickSightRequest {

public:
    ListFolderMembersRequest(const ListFolderMembersRequest &other);
    ListFolderMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFolderMembersRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
