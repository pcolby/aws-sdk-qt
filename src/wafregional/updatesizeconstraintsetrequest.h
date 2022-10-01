// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIZECONSTRAINTSETREQUEST_H
#define QTAWS_UPDATESIZECONSTRAINTSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateSizeConstraintSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateSizeConstraintSetRequest : public WafRegionalRequest {

public:
    UpdateSizeConstraintSetRequest(const UpdateSizeConstraintSetRequest &other);
    UpdateSizeConstraintSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSizeConstraintSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
