// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNGROUPRESOURCESRESPONSE_H
#define QTAWS_UNGROUPRESOURCESRESPONSE_H

#include "resourcegroupsresponse.h"
#include "ungroupresourcesrequest.h"

namespace QtAws {
namespace ResourceGroups {

class UngroupResourcesResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT UngroupResourcesResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    UngroupResourcesResponse(const UngroupResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UngroupResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UngroupResourcesResponse)
    Q_DISABLE_COPY(UngroupResourcesResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
