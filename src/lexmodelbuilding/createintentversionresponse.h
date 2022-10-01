// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTENTVERSIONRESPONSE_H
#define QTAWS_CREATEINTENTVERSIONRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "createintentversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateIntentVersionResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT CreateIntentVersionResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    CreateIntentVersionResponse(const CreateIntentVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIntentVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntentVersionResponse)
    Q_DISABLE_COPY(CreateIntentVersionResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
