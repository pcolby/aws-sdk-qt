// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTRULESETRESPONSE_H
#define QTAWS_DELETERECEIPTRULESETRESPONSE_H

#include "sesresponse.h"
#include "deletereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptRuleSetResponsePrivate;

class QTAWSSES_EXPORT DeleteReceiptRuleSetResponse : public SesResponse {
    Q_OBJECT

public:
    DeleteReceiptRuleSetResponse(const DeleteReceiptRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReceiptRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReceiptRuleSetResponse)
    Q_DISABLE_COPY(DeleteReceiptRuleSetResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
