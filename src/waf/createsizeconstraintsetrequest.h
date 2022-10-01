// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIZECONSTRAINTSETREQUEST_H
#define QTAWS_CREATESIZECONSTRAINTSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class CreateSizeConstraintSetRequestPrivate;

class QTAWSWAF_EXPORT CreateSizeConstraintSetRequest : public WafRequest {

public:
    CreateSizeConstraintSetRequest(const CreateSizeConstraintSetRequest &other);
    CreateSizeConstraintSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSizeConstraintSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
