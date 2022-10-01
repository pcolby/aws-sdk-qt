// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGPATTERNRESPONSE_H
#define QTAWS_CREATELOGPATTERNRESPONSE_H

#include "applicationinsightsresponse.h"
#include "createlogpatternrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class CreateLogPatternResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT CreateLogPatternResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    CreateLogPatternResponse(const CreateLogPatternRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLogPatternRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLogPatternResponse)
    Q_DISABLE_COPY(CreateLogPatternResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
