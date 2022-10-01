// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTENTRESPONSE_H
#define QTAWS_PUTINTENTRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "putintentrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutIntentResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT PutIntentResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    PutIntentResponse(const PutIntentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutIntentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIntentResponse)
    Q_DISABLE_COPY(PutIntentResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
