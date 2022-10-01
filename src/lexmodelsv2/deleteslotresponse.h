// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTRESPONSE_H
#define QTAWS_DELETESLOTRESPONSE_H

#include "lexmodelsv2response.h"
#include "deleteslotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteSlotResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteSlotResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteSlotResponse(const DeleteSlotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSlotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlotResponse)
    Q_DISABLE_COPY(DeleteSlotResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
