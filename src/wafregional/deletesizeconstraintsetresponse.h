// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIZECONSTRAINTSETRESPONSE_H
#define QTAWS_DELETESIZECONSTRAINTSETRESPONSE_H

#include "wafregionalresponse.h"
#include "deletesizeconstraintsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteSizeConstraintSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteSizeConstraintSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    DeleteSizeConstraintSetResponse(const DeleteSizeConstraintSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSizeConstraintSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSizeConstraintSetResponse)
    Q_DISABLE_COPY(DeleteSizeConstraintSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
