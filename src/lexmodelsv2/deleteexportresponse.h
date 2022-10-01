// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPORTRESPONSE_H
#define QTAWS_DELETEEXPORTRESPONSE_H

#include "lexmodelsv2response.h"
#include "deleteexportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteExportResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteExportResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteExportResponse(const DeleteExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExportResponse)
    Q_DISABLE_COPY(DeleteExportResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
