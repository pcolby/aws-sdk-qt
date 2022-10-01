// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIZECONSTRAINTSETRESPONSE_H
#define QTAWS_UPDATESIZECONSTRAINTSETRESPONSE_H

#include "wafregionalresponse.h"
#include "updatesizeconstraintsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateSizeConstraintSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateSizeConstraintSetResponse : public WafRegionalResponse {
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

} // namespace WafRegional
} // namespace QtAws

#endif
