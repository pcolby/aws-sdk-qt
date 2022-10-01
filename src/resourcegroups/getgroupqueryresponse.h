// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPQUERYRESPONSE_H
#define QTAWS_GETGROUPQUERYRESPONSE_H

#include "resourcegroupsresponse.h"
#include "getgroupqueryrequest.h"

namespace QtAws {
namespace ResourceGroups {

class GetGroupQueryResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT GetGroupQueryResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    GetGroupQueryResponse(const GetGroupQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupQueryResponse)
    Q_DISABLE_COPY(GetGroupQueryResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
