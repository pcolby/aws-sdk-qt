// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPASSESSMENTRESPONSE_H
#define QTAWS_DELETEAPPASSESSMENTRESPONSE_H

#include "resiliencehubresponse.h"
#include "deleteappassessmentrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteAppAssessmentResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT DeleteAppAssessmentResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    DeleteAppAssessmentResponse(const DeleteAppAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppAssessmentResponse)
    Q_DISABLE_COPY(DeleteAppAssessmentResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
