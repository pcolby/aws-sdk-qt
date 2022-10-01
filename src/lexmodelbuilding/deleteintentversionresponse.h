// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTVERSIONRESPONSE_H
#define QTAWS_DELETEINTENTVERSIONRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "deleteintentversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteIntentVersionResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteIntentVersionResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    DeleteIntentVersionResponse(const DeleteIntentVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIntentVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntentVersionResponse)
    Q_DISABLE_COPY(DeleteIntentVersionResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
