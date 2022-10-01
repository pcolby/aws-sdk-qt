// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALIESFORINSIGHTRESPONSE_H
#define QTAWS_LISTANOMALIESFORINSIGHTRESPONSE_H

#include "devopsgururesponse.h"
#include "listanomaliesforinsightrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListAnomaliesForInsightResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT ListAnomaliesForInsightResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    ListAnomaliesForInsightResponse(const ListAnomaliesForInsightRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnomaliesForInsightRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomaliesForInsightResponse)
    Q_DISABLE_COPY(ListAnomaliesForInsightResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
