// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIZECONSTRAINTSETREQUEST_H
#define QTAWS_GETSIZECONSTRAINTSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetSizeConstraintSetRequestPrivate;

class QTAWSWAF_EXPORT GetSizeConstraintSetRequest : public WafRequest {

public:
    GetSizeConstraintSetRequest(const GetSizeConstraintSetRequest &other);
    GetSizeConstraintSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSizeConstraintSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
