// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBYTEMATCHSETRESPONSE_H
#define QTAWS_CREATEBYTEMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "createbytematchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateByteMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT CreateByteMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    CreateByteMatchSetResponse(const CreateByteMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateByteMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateByteMatchSetResponse)
    Q_DISABLE_COPY(CreateByteMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
