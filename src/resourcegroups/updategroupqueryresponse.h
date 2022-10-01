// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPQUERYRESPONSE_H
#define QTAWS_UPDATEGROUPQUERYRESPONSE_H

#include "resourcegroupsresponse.h"
#include "updategroupqueryrequest.h"

namespace QtAws {
namespace ResourceGroups {

class UpdateGroupQueryResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT UpdateGroupQueryResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    UpdateGroupQueryResponse(const UpdateGroupQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGroupQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGroupQueryResponse)
    Q_DISABLE_COPY(UpdateGroupQueryResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
