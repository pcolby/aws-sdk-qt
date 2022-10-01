// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHRESOURCESRESPONSE_H
#define QTAWS_SEARCHRESOURCESRESPONSE_H

#include "resourcegroupsresponse.h"
#include "searchresourcesrequest.h"

namespace QtAws {
namespace ResourceGroups {

class SearchResourcesResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT SearchResourcesResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    SearchResourcesResponse(const SearchResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchResourcesResponse)
    Q_DISABLE_COPY(SearchResourcesResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
