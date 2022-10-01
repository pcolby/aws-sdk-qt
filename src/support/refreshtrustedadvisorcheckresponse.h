// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHTRUSTEDADVISORCHECKRESPONSE_H
#define QTAWS_REFRESHTRUSTEDADVISORCHECKRESPONSE_H

#include "supportresponse.h"
#include "refreshtrustedadvisorcheckrequest.h"

namespace QtAws {
namespace Support {

class RefreshTrustedAdvisorCheckResponsePrivate;

class QTAWSSUPPORT_EXPORT RefreshTrustedAdvisorCheckResponse : public SupportResponse {
    Q_OBJECT

public:
    RefreshTrustedAdvisorCheckResponse(const RefreshTrustedAdvisorCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RefreshTrustedAdvisorCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RefreshTrustedAdvisorCheckResponse)
    Q_DISABLE_COPY(RefreshTrustedAdvisorCheckResponse)

};

} // namespace Support
} // namespace QtAws

#endif
