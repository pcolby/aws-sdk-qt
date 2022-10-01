// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPORTRESPONSE_H
#define QTAWS_UPDATEEXPORTRESPONSE_H

#include "lexmodelsv2response.h"
#include "updateexportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateExportResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateExportResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    UpdateExportResponse(const UpdateExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExportResponse)
    Q_DISABLE_COPY(UpdateExportResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
