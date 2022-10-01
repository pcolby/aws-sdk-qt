// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELICENSERESPONSE_H
#define QTAWS_ASSOCIATELICENSERESPONSE_H

#include "grafanaresponse.h"
#include "associatelicenserequest.h"

namespace QtAws {
namespace Grafana {

class AssociateLicenseResponsePrivate;

class QTAWSGRAFANA_EXPORT AssociateLicenseResponse : public GrafanaResponse {
    Q_OBJECT

public:
    AssociateLicenseResponse(const AssociateLicenseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateLicenseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLicenseResponse)
    Q_DISABLE_COPY(AssociateLicenseResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
