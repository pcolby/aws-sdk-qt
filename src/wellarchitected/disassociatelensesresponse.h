// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELENSESRESPONSE_H
#define QTAWS_DISASSOCIATELENSESRESPONSE_H

#include "wellarchitectedresponse.h"
#include "disassociatelensesrequest.h"

namespace QtAws {
namespace WellArchitected {

class DisassociateLensesResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT DisassociateLensesResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    DisassociateLensesResponse(const DisassociateLensesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateLensesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLensesResponse)
    Q_DISABLE_COPY(DisassociateLensesResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
