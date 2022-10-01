// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRESOURCESCANRESPONSE_H
#define QTAWS_STARTRESOURCESCANRESPONSE_H

#include "accessanalyzerresponse.h"
#include "startresourcescanrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class StartResourceScanResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT StartResourceScanResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    StartResourceScanResponse(const StartResourceScanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartResourceScanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartResourceScanResponse)
    Q_DISABLE_COPY(StartResourceScanResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
