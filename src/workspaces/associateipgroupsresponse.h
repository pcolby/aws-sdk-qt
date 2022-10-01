// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIPGROUPSRESPONSE_H
#define QTAWS_ASSOCIATEIPGROUPSRESPONSE_H

#include "workspacesresponse.h"
#include "associateipgroupsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class AssociateIpGroupsResponsePrivate;

class QTAWSWORKSPACES_EXPORT AssociateIpGroupsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    AssociateIpGroupsResponse(const AssociateIpGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateIpGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateIpGroupsResponse)
    Q_DISABLE_COPY(AssociateIpGroupsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
