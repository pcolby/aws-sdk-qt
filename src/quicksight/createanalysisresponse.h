// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANALYSISRESPONSE_H
#define QTAWS_CREATEANALYSISRESPONSE_H

#include "quicksightresponse.h"
#include "createanalysisrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateAnalysisResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateAnalysisResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateAnalysisResponse(const CreateAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnalysisResponse)
    Q_DISABLE_COPY(CreateAnalysisResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
