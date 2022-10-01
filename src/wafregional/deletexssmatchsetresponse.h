// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEXSSMATCHSETRESPONSE_H
#define QTAWS_DELETEXSSMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "deletexssmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteXssMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteXssMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    DeleteXssMatchSetResponse(const DeleteXssMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteXssMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteXssMatchSetResponse)
    Q_DISABLE_COPY(DeleteXssMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
