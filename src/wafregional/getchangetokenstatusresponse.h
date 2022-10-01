// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENSTATUSRESPONSE_H
#define QTAWS_GETCHANGETOKENSTATUSRESPONSE_H

#include "wafregionalresponse.h"
#include "getchangetokenstatusrequest.h"

namespace QtAws {
namespace WafRegional {

class GetChangeTokenStatusResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetChangeTokenStatusResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetChangeTokenStatusResponse(const GetChangeTokenStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChangeTokenStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeTokenStatusResponse)
    Q_DISABLE_COPY(GetChangeTokenStatusResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
