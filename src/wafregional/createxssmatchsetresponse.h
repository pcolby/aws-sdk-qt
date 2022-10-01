// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEXSSMATCHSETRESPONSE_H
#define QTAWS_CREATEXSSMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "createxssmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateXssMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT CreateXssMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    CreateXssMatchSetResponse(const CreateXssMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateXssMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateXssMatchSetResponse)
    Q_DISABLE_COPY(CreateXssMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
