// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERMEMBERSHIPRESPONSE_H
#define QTAWS_DELETEFOLDERMEMBERSHIPRESPONSE_H

#include "quicksightresponse.h"
#include "deletefoldermembershiprequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteFolderMembershipResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteFolderMembershipResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteFolderMembershipResponse(const DeleteFolderMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFolderMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFolderMembershipResponse)
    Q_DISABLE_COPY(DeleteFolderMembershipResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
