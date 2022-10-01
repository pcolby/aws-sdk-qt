// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBYTEMATCHSETRESPONSE_H
#define QTAWS_UPDATEBYTEMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "updatebytematchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateByteMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateByteMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    UpdateByteMatchSetResponse(const UpdateByteMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateByteMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateByteMatchSetResponse)
    Q_DISABLE_COPY(UpdateByteMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
