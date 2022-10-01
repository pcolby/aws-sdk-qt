// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIZECONSTRAINTSETRESPONSE_H
#define QTAWS_CREATESIZECONSTRAINTSETRESPONSE_H

#include "wafregionalresponse.h"
#include "createsizeconstraintsetrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateSizeConstraintSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT CreateSizeConstraintSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    CreateSizeConstraintSetResponse(const CreateSizeConstraintSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSizeConstraintSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSizeConstraintSetResponse)
    Q_DISABLE_COPY(CreateSizeConstraintSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
