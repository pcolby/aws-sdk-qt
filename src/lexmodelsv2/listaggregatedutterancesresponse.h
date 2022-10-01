// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGGREGATEDUTTERANCESRESPONSE_H
#define QTAWS_LISTAGGREGATEDUTTERANCESRESPONSE_H

#include "lexmodelsv2response.h"
#include "listaggregatedutterancesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListAggregatedUtterancesResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListAggregatedUtterancesResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListAggregatedUtterancesResponse(const ListAggregatedUtterancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAggregatedUtterancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAggregatedUtterancesResponse)
    Q_DISABLE_COPY(ListAggregatedUtterancesResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
