// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEXSSMATCHSETRESPONSE_H
#define QTAWS_UPDATEXSSMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "updatexssmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateXssMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateXssMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    UpdateXssMatchSetResponse(const UpdateXssMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateXssMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateXssMatchSetResponse)
    Q_DISABLE_COPY(UpdateXssMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
