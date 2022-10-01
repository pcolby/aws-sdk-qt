// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELENSESRESPONSE_H
#define QTAWS_ASSOCIATELENSESRESPONSE_H

#include "wellarchitectedresponse.h"
#include "associatelensesrequest.h"

namespace QtAws {
namespace WellArchitected {

class AssociateLensesResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT AssociateLensesResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    AssociateLensesResponse(const AssociateLensesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateLensesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLensesResponse)
    Q_DISABLE_COPY(AssociateLensesResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
