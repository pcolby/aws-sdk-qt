// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYSISRESPONSE_H
#define QTAWS_DELETEANALYSISRESPONSE_H

#include "quicksightresponse.h"
#include "deleteanalysisrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteAnalysisResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteAnalysisResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteAnalysisResponse(const DeleteAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnalysisResponse)
    Q_DISABLE_COPY(DeleteAnalysisResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
