// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIZECONSTRAINTSETREQUEST_H
#define QTAWS_GETSIZECONSTRAINTSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetSizeConstraintSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetSizeConstraintSetRequest : public WafRegionalRequest {

public:
    GetSizeConstraintSetRequest(const GetSizeConstraintSetRequest &other);
    GetSizeConstraintSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSizeConstraintSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
