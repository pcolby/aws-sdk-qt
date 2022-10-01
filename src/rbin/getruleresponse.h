// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULERESPONSE_H
#define QTAWS_GETRULERESPONSE_H

#include "rbinresponse.h"
#include "getrulerequest.h"

namespace QtAws {
namespace Rbin {

class GetRuleResponsePrivate;

class QTAWSRBIN_EXPORT GetRuleResponse : public RbinResponse {
    Q_OBJECT

public:
    GetRuleResponse(const GetRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRuleResponse)
    Q_DISABLE_COPY(GetRuleResponse)

};

} // namespace Rbin
} // namespace QtAws

#endif
