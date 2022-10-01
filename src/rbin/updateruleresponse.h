// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULERESPONSE_H
#define QTAWS_UPDATERULERESPONSE_H

#include "rbinresponse.h"
#include "updaterulerequest.h"

namespace QtAws {
namespace Rbin {

class UpdateRuleResponsePrivate;

class QTAWSRBIN_EXPORT UpdateRuleResponse : public RbinResponse {
    Q_OBJECT

public:
    UpdateRuleResponse(const UpdateRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleResponse)
    Q_DISABLE_COPY(UpdateRuleResponse)

};

} // namespace Rbin
} // namespace QtAws

#endif
