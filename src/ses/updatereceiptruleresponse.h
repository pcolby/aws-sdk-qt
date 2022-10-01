// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECEIPTRULERESPONSE_H
#define QTAWS_UPDATERECEIPTRULERESPONSE_H

#include "sesresponse.h"
#include "updatereceiptrulerequest.h"

namespace QtAws {
namespace Ses {

class UpdateReceiptRuleResponsePrivate;

class QTAWSSES_EXPORT UpdateReceiptRuleResponse : public SesResponse {
    Q_OBJECT

public:
    UpdateReceiptRuleResponse(const UpdateReceiptRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReceiptRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReceiptRuleResponse)
    Q_DISABLE_COPY(UpdateReceiptRuleResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
