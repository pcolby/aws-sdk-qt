// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDRULESETRESPONSE_H
#define QTAWS_GETMANAGEDRULESETRESPONSE_H

#include "wafv2response.h"
#include "getmanagedrulesetrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetManagedRuleSetResponsePrivate;

class QTAWSWAFV2_EXPORT GetManagedRuleSetResponse : public Wafv2Response {
    Q_OBJECT

public:
    GetManagedRuleSetResponse(const GetManagedRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetManagedRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetManagedRuleSetResponse)
    Q_DISABLE_COPY(GetManagedRuleSetResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
