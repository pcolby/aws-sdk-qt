// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIZECONSTRAINTSETRESPONSE_H
#define QTAWS_GETSIZECONSTRAINTSETRESPONSE_H

#include "wafresponse.h"
#include "getsizeconstraintsetrequest.h"

namespace QtAws {
namespace Waf {

class GetSizeConstraintSetResponsePrivate;

class QTAWSWAF_EXPORT GetSizeConstraintSetResponse : public WafResponse {
    Q_OBJECT

public:
    GetSizeConstraintSetResponse(const GetSizeConstraintSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSizeConstraintSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSizeConstraintSetResponse)
    Q_DISABLE_COPY(GetSizeConstraintSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
