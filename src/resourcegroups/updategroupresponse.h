// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPRESPONSE_H
#define QTAWS_UPDATEGROUPRESPONSE_H

#include "resourcegroupsresponse.h"
#include "updategrouprequest.h"

namespace QtAws {
namespace ResourceGroups {

class UpdateGroupResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT UpdateGroupResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    UpdateGroupResponse(const UpdateGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGroupResponse)
    Q_DISABLE_COPY(UpdateGroupResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
