// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTVERSIONRESPONSE_H
#define QTAWS_DELETEBOTVERSIONRESPONSE_H

#include "lexmodelsv2response.h"
#include "deletebotversionrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotVersionResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteBotVersionResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteBotVersionResponse(const DeleteBotVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBotVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotVersionResponse)
    Q_DISABLE_COPY(DeleteBotVersionResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
