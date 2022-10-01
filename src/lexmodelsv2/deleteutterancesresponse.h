// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUTTERANCESRESPONSE_H
#define QTAWS_DELETEUTTERANCESRESPONSE_H

#include "lexmodelsv2response.h"
#include "deleteutterancesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteUtterancesResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteUtterancesResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteUtterancesResponse(const DeleteUtterancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUtterancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUtterancesResponse)
    Q_DISABLE_COPY(DeleteUtterancesResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
