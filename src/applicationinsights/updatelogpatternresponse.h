// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGPATTERNRESPONSE_H
#define QTAWS_UPDATELOGPATTERNRESPONSE_H

#include "applicationinsightsresponse.h"
#include "updatelogpatternrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class UpdateLogPatternResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT UpdateLogPatternResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    UpdateLogPatternResponse(const UpdateLogPatternRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLogPatternRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLogPatternResponse)
    Q_DISABLE_COPY(UpdateLogPatternResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
