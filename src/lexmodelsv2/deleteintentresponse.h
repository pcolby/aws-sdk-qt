// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTRESPONSE_H
#define QTAWS_DELETEINTENTRESPONSE_H

#include "lexmodelsv2response.h"
#include "deleteintentrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteIntentResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteIntentResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteIntentResponse(const DeleteIntentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIntentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntentResponse)
    Q_DISABLE_COPY(DeleteIntentResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
