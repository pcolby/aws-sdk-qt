// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGPATTERNRESPONSE_H
#define QTAWS_DELETELOGPATTERNRESPONSE_H

#include "applicationinsightsresponse.h"
#include "deletelogpatternrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DeleteLogPatternResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DeleteLogPatternResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    DeleteLogPatternResponse(const DeleteLogPatternRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLogPatternRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLogPatternResponse)
    Q_DISABLE_COPY(DeleteLogPatternResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
