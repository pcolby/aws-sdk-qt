// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGRESPONSE_H
#define QTAWS_GETFINDINGRESPONSE_H

#include "accessanalyzerresponse.h"
#include "getfindingrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetFindingResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT GetFindingResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    GetFindingResponse(const GetFindingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingResponse)
    Q_DISABLE_COPY(GetFindingResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
