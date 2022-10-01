// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDSTATEMENTMANAGEDKEYSRESPONSE_H
#define QTAWS_GETRATEBASEDSTATEMENTMANAGEDKEYSRESPONSE_H

#include "wafv2response.h"
#include "getratebasedstatementmanagedkeysrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetRateBasedStatementManagedKeysResponsePrivate;

class QTAWSWAFV2_EXPORT GetRateBasedStatementManagedKeysResponse : public Wafv2Response {
    Q_OBJECT

public:
    GetRateBasedStatementManagedKeysResponse(const GetRateBasedStatementManagedKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRateBasedStatementManagedKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRateBasedStatementManagedKeysResponse)
    Q_DISABLE_COPY(GetRateBasedStatementManagedKeysResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
