// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTRESPONSE_H
#define QTAWS_CREATEEXPORTRESPONSE_H

#include "lexmodelsv2response.h"
#include "createexportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateExportResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT CreateExportResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateExportResponse(const CreateExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExportResponse)
    Q_DISABLE_COPY(CreateExportResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
