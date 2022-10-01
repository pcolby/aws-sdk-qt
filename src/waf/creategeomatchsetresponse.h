// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGEOMATCHSETRESPONSE_H
#define QTAWS_CREATEGEOMATCHSETRESPONSE_H

#include "wafresponse.h"
#include "creategeomatchsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateGeoMatchSetResponsePrivate;

class QTAWSWAF_EXPORT CreateGeoMatchSetResponse : public WafResponse {
    Q_OBJECT

public:
    CreateGeoMatchSetResponse(const CreateGeoMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGeoMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGeoMatchSetResponse)
    Q_DISABLE_COPY(CreateGeoMatchSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
