// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHORGANIZATIONINSIGHTSRESPONSE_H
#define QTAWS_SEARCHORGANIZATIONINSIGHTSRESPONSE_H

#include "devopsgururesponse.h"
#include "searchorganizationinsightsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class SearchOrganizationInsightsResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT SearchOrganizationInsightsResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    SearchOrganizationInsightsResponse(const SearchOrganizationInsightsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchOrganizationInsightsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchOrganizationInsightsResponse)
    Q_DISABLE_COPY(SearchOrganizationInsightsResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
