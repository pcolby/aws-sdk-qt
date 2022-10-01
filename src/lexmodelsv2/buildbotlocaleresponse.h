// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUILDBOTLOCALERESPONSE_H
#define QTAWS_BUILDBOTLOCALERESPONSE_H

#include "lexmodelsv2response.h"
#include "buildbotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class BuildBotLocaleResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT BuildBotLocaleResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    BuildBotLocaleResponse(const BuildBotLocaleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BuildBotLocaleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BuildBotLocaleResponse)
    Q_DISABLE_COPY(BuildBotLocaleResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
