// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEIDRESPONSE_H
#define QTAWS_ANALYZEIDRESPONSE_H

#include "textractresponse.h"
#include "analyzeidrequest.h"

namespace QtAws {
namespace Textract {

class AnalyzeIDResponsePrivate;

class QTAWSTEXTRACT_EXPORT AnalyzeIDResponse : public TextractResponse {
    Q_OBJECT

public:
    AnalyzeIDResponse(const AnalyzeIDRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AnalyzeIDRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AnalyzeIDResponse)
    Q_DISABLE_COPY(AnalyzeIDResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
