// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANALYZERRESPONSE_H
#define QTAWS_CREATEANALYZERRESPONSE_H

#include "accessanalyzerresponse.h"
#include "createanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateAnalyzerResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT CreateAnalyzerResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    CreateAnalyzerResponse(const CreateAnalyzerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAnalyzerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnalyzerResponse)
    Q_DISABLE_COPY(CreateAnalyzerResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
