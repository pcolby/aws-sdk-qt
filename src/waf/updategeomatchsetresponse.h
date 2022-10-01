// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOMATCHSETRESPONSE_H
#define QTAWS_UPDATEGEOMATCHSETRESPONSE_H

#include "wafresponse.h"
#include "updategeomatchsetrequest.h"

namespace QtAws {
namespace Waf {

class UpdateGeoMatchSetResponsePrivate;

class QTAWSWAF_EXPORT UpdateGeoMatchSetResponse : public WafResponse {
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

} // namespace Waf
} // namespace QtAws

#endif
