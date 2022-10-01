// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDATABASESBYLFTAGSRESPONSE_H
#define QTAWS_SEARCHDATABASESBYLFTAGSRESPONSE_H

#include "lakeformationresponse.h"
#include "searchdatabasesbylftagsrequest.h"

namespace QtAws {
namespace LakeFormation {

class SearchDatabasesByLFTagsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT SearchDatabasesByLFTagsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    SearchDatabasesByLFTagsResponse(const SearchDatabasesByLFTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchDatabasesByLFTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchDatabasesByLFTagsResponse)
    Q_DISABLE_COPY(SearchDatabasesByLFTagsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
