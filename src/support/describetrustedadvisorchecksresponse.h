// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKSRESPONSE_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKSRESPONSE_H

#include "supportresponse.h"
#include "describetrustedadvisorchecksrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorChecksResponsePrivate;

class QTAWSSUPPORT_EXPORT DescribeTrustedAdvisorChecksResponse : public SupportResponse {
    Q_OBJECT

public:
    DescribeTrustedAdvisorChecksResponse(const DescribeTrustedAdvisorChecksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrustedAdvisorChecksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustedAdvisorChecksResponse)
    Q_DISABLE_COPY(DescribeTrustedAdvisorChecksResponse)

};

} // namespace Support
} // namespace QtAws

#endif
