// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMANAGEDRULESETVERSIONEXPIRYDATERESPONSE_H
#define QTAWS_UPDATEMANAGEDRULESETVERSIONEXPIRYDATERESPONSE_H

#include "wafv2response.h"
#include "updatemanagedrulesetversionexpirydaterequest.h"

namespace QtAws {
namespace Wafv2 {

class UpdateManagedRuleSetVersionExpiryDateResponsePrivate;

class QTAWSWAFV2_EXPORT UpdateManagedRuleSetVersionExpiryDateResponse : public Wafv2Response {
    Q_OBJECT

public:
    UpdateManagedRuleSetVersionExpiryDateResponse(const UpdateManagedRuleSetVersionExpiryDateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateManagedRuleSetVersionExpiryDateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateManagedRuleSetVersionExpiryDateResponse)
    Q_DISABLE_COPY(UpdateManagedRuleSetVersionExpiryDateResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
