// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTRESPONSE_H
#define QTAWS_DESCRIBEBOTRESPONSE_H

#include "lexmodelsv2response.h"
#include "describebotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeBotResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeBotResponse(const DescribeBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBotResponse)
    Q_DISABLE_COPY(DescribeBotResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
