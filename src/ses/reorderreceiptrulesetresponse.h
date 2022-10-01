// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REORDERRECEIPTRULESETRESPONSE_H
#define QTAWS_REORDERRECEIPTRULESETRESPONSE_H

#include "sesresponse.h"
#include "reorderreceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class ReorderReceiptRuleSetResponsePrivate;

class QTAWSSES_EXPORT ReorderReceiptRuleSetResponse : public SesResponse {
    Q_OBJECT

public:
    ReorderReceiptRuleSetResponse(const ReorderReceiptRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReorderReceiptRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReorderReceiptRuleSetResponse)
    Q_DISABLE_COPY(ReorderReceiptRuleSetResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
