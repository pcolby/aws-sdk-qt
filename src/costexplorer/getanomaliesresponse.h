// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALIESRESPONSE_H
#define QTAWS_GETANOMALIESRESPONSE_H

#include "costexplorerresponse.h"
#include "getanomaliesrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomaliesResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetAnomaliesResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetAnomaliesResponse(const GetAnomaliesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAnomaliesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnomaliesResponse)
    Q_DISABLE_COPY(GetAnomaliesResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
