// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFOLDERMEMBERSRESPONSE_H
#define QTAWS_LISTFOLDERMEMBERSRESPONSE_H

#include "quicksightresponse.h"
#include "listfoldermembersrequest.h"

namespace QtAws {
namespace QuickSight {

class ListFolderMembersResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListFolderMembersResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListFolderMembersResponse(const ListFolderMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFolderMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFolderMembersResponse)
    Q_DISABLE_COPY(ListFolderMembersResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
