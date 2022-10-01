// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIPGROUPSRESPONSE_H
#define QTAWS_DISASSOCIATEIPGROUPSRESPONSE_H

#include "workspacesresponse.h"
#include "disassociateipgroupsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DisassociateIpGroupsResponsePrivate;

class QTAWSWORKSPACES_EXPORT DisassociateIpGroupsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DisassociateIpGroupsResponse(const DisassociateIpGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateIpGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateIpGroupsResponse)
    Q_DISABLE_COPY(DisassociateIpGroupsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
