// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHINSIGHTSRESPONSE_H
#define QTAWS_SEARCHINSIGHTSRESPONSE_H

#include "devopsgururesponse.h"
#include "searchinsightsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class SearchInsightsResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT SearchInsightsResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    SearchInsightsResponse(const SearchInsightsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchInsightsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchInsightsResponse)
    Q_DISABLE_COPY(SearchInsightsResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
