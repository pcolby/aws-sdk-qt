// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTLOCALERESPONSE_H
#define QTAWS_DESCRIBEBOTLOCALERESPONSE_H

#include "lexmodelsv2response.h"
#include "describebotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotLocaleResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeBotLocaleResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeBotLocaleResponse(const DescribeBotLocaleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBotLocaleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBotLocaleResponse)
    Q_DISABLE_COPY(DescribeBotLocaleResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
