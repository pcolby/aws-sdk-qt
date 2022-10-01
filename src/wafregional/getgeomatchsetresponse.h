// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOMATCHSETRESPONSE_H
#define QTAWS_GETGEOMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "getgeomatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetGeoMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetGeoMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetGeoMatchSetResponse(const GetGeoMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGeoMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeoMatchSetResponse)
    Q_DISABLE_COPY(GetGeoMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
