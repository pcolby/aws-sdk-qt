// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPENSEANALYSISRESPONSE_H
#define QTAWS_STARTEXPENSEANALYSISRESPONSE_H

#include "textractresponse.h"
#include "startexpenseanalysisrequest.h"

namespace QtAws {
namespace Textract {

class StartExpenseAnalysisResponsePrivate;

class QTAWSTEXTRACT_EXPORT StartExpenseAnalysisResponse : public TextractResponse {
    Q_OBJECT

public:
    StartExpenseAnalysisResponse(const StartExpenseAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartExpenseAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExpenseAnalysisResponse)
    Q_DISABLE_COPY(StartExpenseAnalysisResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
