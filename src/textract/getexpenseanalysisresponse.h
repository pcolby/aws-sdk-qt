// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPENSEANALYSISRESPONSE_H
#define QTAWS_GETEXPENSEANALYSISRESPONSE_H

#include "textractresponse.h"
#include "getexpenseanalysisrequest.h"

namespace QtAws {
namespace Textract {

class GetExpenseAnalysisResponsePrivate;

class QTAWSTEXTRACT_EXPORT GetExpenseAnalysisResponse : public TextractResponse {
    Q_OBJECT

public:
    GetExpenseAnalysisResponse(const GetExpenseAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExpenseAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExpenseAnalysisResponse)
    Q_DISABLE_COPY(GetExpenseAnalysisResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
