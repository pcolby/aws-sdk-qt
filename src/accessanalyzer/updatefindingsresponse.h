// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSRESPONSE_H
#define QTAWS_UPDATEFINDINGSRESPONSE_H

#include "accessanalyzerresponse.h"
#include "updatefindingsrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class UpdateFindingsResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT UpdateFindingsResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    UpdateFindingsResponse(const UpdateFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFindingsResponse)
    Q_DISABLE_COPY(UpdateFindingsResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
