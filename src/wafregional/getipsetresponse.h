// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETRESPONSE_H
#define QTAWS_GETIPSETRESPONSE_H

#include "wafregionalresponse.h"
#include "getipsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetIPSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetIPSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetIPSetResponse(const GetIPSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIPSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIPSetResponse)
    Q_DISABLE_COPY(GetIPSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
