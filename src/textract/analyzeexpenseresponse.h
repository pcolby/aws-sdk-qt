// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEEXPENSERESPONSE_H
#define QTAWS_ANALYZEEXPENSERESPONSE_H

#include "textractresponse.h"
#include "analyzeexpenserequest.h"

namespace QtAws {
namespace Textract {

class AnalyzeExpenseResponsePrivate;

class QTAWSTEXTRACT_EXPORT AnalyzeExpenseResponse : public TextractResponse {
    Q_OBJECT

public:
    AnalyzeExpenseResponse(const AnalyzeExpenseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AnalyzeExpenseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AnalyzeExpenseResponse)
    Q_DISABLE_COPY(AnalyzeExpenseResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
