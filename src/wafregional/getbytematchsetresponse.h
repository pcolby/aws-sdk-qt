// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBYTEMATCHSETRESPONSE_H
#define QTAWS_GETBYTEMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "getbytematchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetByteMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetByteMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetByteMatchSetResponse(const GetByteMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetByteMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetByteMatchSetResponse)
    Q_DISABLE_COPY(GetByteMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
