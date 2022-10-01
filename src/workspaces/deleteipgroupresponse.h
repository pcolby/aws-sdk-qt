// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPGROUPRESPONSE_H
#define QTAWS_DELETEIPGROUPRESPONSE_H

#include "workspacesresponse.h"
#include "deleteipgrouprequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteIpGroupResponsePrivate;

class QTAWSWORKSPACES_EXPORT DeleteIpGroupResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DeleteIpGroupResponse(const DeleteIpGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIpGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIpGroupResponse)
    Q_DISABLE_COPY(DeleteIpGroupResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
