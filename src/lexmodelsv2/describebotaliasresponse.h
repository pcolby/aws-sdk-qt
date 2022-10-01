// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTALIASRESPONSE_H
#define QTAWS_DESCRIBEBOTALIASRESPONSE_H

#include "lexmodelsv2response.h"
#include "describebotaliasrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotAliasResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeBotAliasResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeBotAliasResponse(const DescribeBotAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBotAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBotAliasResponse)
    Q_DISABLE_COPY(DescribeBotAliasResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
