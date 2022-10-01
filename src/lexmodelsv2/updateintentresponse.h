// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTENTRESPONSE_H
#define QTAWS_UPDATEINTENTRESPONSE_H

#include "lexmodelsv2response.h"
#include "updateintentrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateIntentResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateIntentResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    UpdateIntentResponse(const UpdateIntentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIntentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIntentResponse)
    Q_DISABLE_COPY(UpdateIntentResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
