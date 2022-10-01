// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTVERSIONRESPONSE_H
#define QTAWS_DESCRIBEBOTVERSIONRESPONSE_H

#include "lexmodelsv2response.h"
#include "describebotversionrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotVersionResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeBotVersionResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeBotVersionResponse(const DescribeBotVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBotVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBotVersionResponse)
    Q_DISABLE_COPY(DescribeBotVersionResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
