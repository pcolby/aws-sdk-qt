// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESEVERITYLEVELSRESPONSE_H
#define QTAWS_DESCRIBESEVERITYLEVELSRESPONSE_H

#include "supportresponse.h"
#include "describeseveritylevelsrequest.h"

namespace QtAws {
namespace Support {

class DescribeSeverityLevelsResponsePrivate;

class QTAWSSUPPORT_EXPORT DescribeSeverityLevelsResponse : public SupportResponse {
    Q_OBJECT

public:
    DescribeSeverityLevelsResponse(const DescribeSeverityLevelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSeverityLevelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSeverityLevelsResponse)
    Q_DISABLE_COPY(DescribeSeverityLevelsResponse)

};

} // namespace Support
} // namespace QtAws

#endif
