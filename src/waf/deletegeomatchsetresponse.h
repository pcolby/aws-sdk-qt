// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOMATCHSETRESPONSE_H
#define QTAWS_DELETEGEOMATCHSETRESPONSE_H

#include "wafresponse.h"
#include "deletegeomatchsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteGeoMatchSetResponsePrivate;

class QTAWSWAF_EXPORT DeleteGeoMatchSetResponse : public WafResponse {
    Q_OBJECT

public:
    DeleteGeoMatchSetResponse(const DeleteGeoMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGeoMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGeoMatchSetResponse)
    Q_DISABLE_COPY(DeleteGeoMatchSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
