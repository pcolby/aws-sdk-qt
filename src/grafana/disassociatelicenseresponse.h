// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELICENSERESPONSE_H
#define QTAWS_DISASSOCIATELICENSERESPONSE_H

#include "grafanaresponse.h"
#include "disassociatelicenserequest.h"

namespace QtAws {
namespace Grafana {

class DisassociateLicenseResponsePrivate;

class QTAWSGRAFANA_EXPORT DisassociateLicenseResponse : public GrafanaResponse {
    Q_OBJECT

public:
    DisassociateLicenseResponse(const DisassociateLicenseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateLicenseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLicenseResponse)
    Q_DISABLE_COPY(DisassociateLicenseResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
