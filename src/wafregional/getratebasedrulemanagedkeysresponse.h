// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDRULEMANAGEDKEYSRESPONSE_H
#define QTAWS_GETRATEBASEDRULEMANAGEDKEYSRESPONSE_H

#include "wafregionalresponse.h"
#include "getratebasedrulemanagedkeysrequest.h"

namespace QtAws {
namespace WafRegional {

class GetRateBasedRuleManagedKeysResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetRateBasedRuleManagedKeysResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetRateBasedRuleManagedKeysResponse(const GetRateBasedRuleManagedKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRateBasedRuleManagedKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRateBasedRuleManagedKeysResponse)
    Q_DISABLE_COPY(GetRateBasedRuleManagedKeysResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
