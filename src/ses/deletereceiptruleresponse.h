// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTRULERESPONSE_H
#define QTAWS_DELETERECEIPTRULERESPONSE_H

#include "sesresponse.h"
#include "deletereceiptrulerequest.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptRuleResponsePrivate;

class QTAWSSES_EXPORT DeleteReceiptRuleResponse : public SesResponse {
    Q_OBJECT

public:
    DeleteReceiptRuleResponse(const DeleteReceiptRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReceiptRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReceiptRuleResponse)
    Q_DISABLE_COPY(DeleteReceiptRuleResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
