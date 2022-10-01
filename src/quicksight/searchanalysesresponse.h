// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHANALYSESRESPONSE_H
#define QTAWS_SEARCHANALYSESRESPONSE_H

#include "quicksightresponse.h"
#include "searchanalysesrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchAnalysesResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT SearchAnalysesResponse : public QuickSightResponse {
    Q_OBJECT

public:
    SearchAnalysesResponse(const SearchAnalysesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchAnalysesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchAnalysesResponse)
    Q_DISABLE_COPY(SearchAnalysesResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
