// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPGROUPRESPONSE_H
#define QTAWS_CREATEIPGROUPRESPONSE_H

#include "workspacesresponse.h"
#include "createipgrouprequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateIpGroupResponsePrivate;

class QTAWSWORKSPACES_EXPORT CreateIpGroupResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    CreateIpGroupResponse(const CreateIpGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIpGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIpGroupResponse)
    Q_DISABLE_COPY(CreateIpGroupResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
