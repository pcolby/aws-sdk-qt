// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOVERAGESTATISTICSRESPONSE_H
#define QTAWS_LISTCOVERAGESTATISTICSRESPONSE_H

#include "inspector2response.h"
#include "listcoveragestatisticsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListCoverageStatisticsResponsePrivate;

class QTAWSINSPECTOR2_EXPORT ListCoverageStatisticsResponse : public Inspector2Response {
    Q_OBJECT

public:
    ListCoverageStatisticsResponse(const ListCoverageStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCoverageStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoverageStatisticsResponse)
    Q_DISABLE_COPY(ListCoverageStatisticsResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
