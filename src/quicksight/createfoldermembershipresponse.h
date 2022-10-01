// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFOLDERMEMBERSHIPRESPONSE_H
#define QTAWS_CREATEFOLDERMEMBERSHIPRESPONSE_H

#include "quicksightresponse.h"
#include "createfoldermembershiprequest.h"

namespace QtAws {
namespace QuickSight {

class CreateFolderMembershipResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateFolderMembershipResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateFolderMembershipResponse(const CreateFolderMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFolderMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFolderMembershipResponse)
    Q_DISABLE_COPY(CreateFolderMembershipResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
