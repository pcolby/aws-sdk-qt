// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIZECONSTRAINTSETRESPONSE_H
#define QTAWS_UPDATESIZECONSTRAINTSETRESPONSE_H

#include "wafresponse.h"
#include "updatesizeconstraintsetrequest.h"

namespace QtAws {
namespace Waf {

class UpdateSizeConstraintSetResponsePrivate;

class QTAWSWAF_EXPORT UpdateSizeConstraintSetResponse : public WafResponse {
    Q_OBJECT

public:
    UpdateSizeConstraintSetResponse(const UpdateSizeConstraintSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSizeConstraintSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSizeConstraintSetResponse)
    Q_DISABLE_COPY(UpdateSizeConstraintSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
