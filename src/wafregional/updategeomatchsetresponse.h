// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOMATCHSETRESPONSE_H
#define QTAWS_UPDATEGEOMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "updategeomatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateGeoMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateGeoMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    UpdateGeoMatchSetResponse(const UpdateGeoMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGeoMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGeoMatchSetResponse)
    Q_DISABLE_COPY(UpdateGeoMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
