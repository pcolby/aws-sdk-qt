// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIMENSIONVALUESRESPONSE_H
#define QTAWS_GETDIMENSIONVALUESRESPONSE_H

#include "costexplorerresponse.h"
#include "getdimensionvaluesrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetDimensionValuesResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetDimensionValuesResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetDimensionValuesResponse(const GetDimensionValuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDimensionValuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDimensionValuesResponse)
    Q_DISABLE_COPY(GetDimensionValuesResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
