// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANALYZERRESPONSE_H
#define QTAWS_GETANALYZERRESPONSE_H

#include "accessanalyzerresponse.h"
#include "getanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAnalyzerResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT GetAnalyzerResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    GetAnalyzerResponse(const GetAnalyzerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAnalyzerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnalyzerResponse)
    Q_DISABLE_COPY(GetAnalyzerResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
