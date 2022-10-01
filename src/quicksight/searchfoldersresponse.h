// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFOLDERSRESPONSE_H
#define QTAWS_SEARCHFOLDERSRESPONSE_H

#include "quicksightresponse.h"
#include "searchfoldersrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchFoldersResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT SearchFoldersResponse : public QuickSightResponse {
    Q_OBJECT

public:
    SearchFoldersResponse(const SearchFoldersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchFoldersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchFoldersResponse)
    Q_DISABLE_COPY(SearchFoldersResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
