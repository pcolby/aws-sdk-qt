// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTRESPONSE_H
#define QTAWS_STARTIMPORTRESPONSE_H

#include "lexmodelsv2response.h"
#include "startimportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class StartImportResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT StartImportResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    StartImportResponse(const StartImportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartImportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImportResponse)
    Q_DISABLE_COPY(StartImportResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
