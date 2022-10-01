// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTABLESBYLFTAGSRESPONSE_H
#define QTAWS_SEARCHTABLESBYLFTAGSRESPONSE_H

#include "lakeformationresponse.h"
#include "searchtablesbylftagsrequest.h"

namespace QtAws {
namespace LakeFormation {

class SearchTablesByLFTagsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT SearchTablesByLFTagsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    SearchTablesByLFTagsResponse(const SearchTablesByLFTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchTablesByLFTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchTablesByLFTagsResponse)
    Q_DISABLE_COPY(SearchTablesByLFTagsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
