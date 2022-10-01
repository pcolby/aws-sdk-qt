// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHGROUPSRESPONSE_H
#define QTAWS_SEARCHGROUPSRESPONSE_H

#include "quicksightresponse.h"
#include "searchgroupsrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchGroupsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT SearchGroupsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    SearchGroupsResponse(const SearchGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchGroupsResponse)
    Q_DISABLE_COPY(SearchGroupsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
