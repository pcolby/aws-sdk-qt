// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTRULERESPONSE_H
#define QTAWS_CREATERECEIPTRULERESPONSE_H

#include "sesresponse.h"
#include "createreceiptrulerequest.h"

namespace QtAws {
namespace Ses {

class CreateReceiptRuleResponsePrivate;

class QTAWSSES_EXPORT CreateReceiptRuleResponse : public SesResponse {
    Q_OBJECT

public:
    CreateReceiptRuleResponse(const CreateReceiptRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReceiptRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReceiptRuleResponse)
    Q_DISABLE_COPY(CreateReceiptRuleResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
