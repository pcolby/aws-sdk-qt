// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPMEMBERSHIPRESPONSE_H
#define QTAWS_CREATEGROUPMEMBERSHIPRESPONSE_H

#include "quicksightresponse.h"
#include "creategroupmembershiprequest.h"

namespace QtAws {
namespace QuickSight {

class CreateGroupMembershipResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateGroupMembershipResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateGroupMembershipResponse(const CreateGroupMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGroupMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGroupMembershipResponse)
    Q_DISABLE_COPY(CreateGroupMembershipResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
