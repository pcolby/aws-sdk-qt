// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULESOFIPGROUPRESPONSE_H
#define QTAWS_UPDATERULESOFIPGROUPRESPONSE_H

#include "workspacesresponse.h"
#include "updaterulesofipgrouprequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateRulesOfIpGroupResponsePrivate;

class QTAWSWORKSPACES_EXPORT UpdateRulesOfIpGroupResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    UpdateRulesOfIpGroupResponse(const UpdateRulesOfIpGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRulesOfIpGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRulesOfIpGroupResponse)
    Q_DISABLE_COPY(UpdateRulesOfIpGroupResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
