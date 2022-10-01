// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONINSIGHTSRESPONSE_H
#define QTAWS_LISTORGANIZATIONINSIGHTSRESPONSE_H

#include "devopsgururesponse.h"
#include "listorganizationinsightsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListOrganizationInsightsResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT ListOrganizationInsightsResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    ListOrganizationInsightsResponse(const ListOrganizationInsightsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOrganizationInsightsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationInsightsResponse)
    Q_DISABLE_COPY(ListOrganizationInsightsResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
