// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIZECONSTRAINTSETREQUEST_H
#define QTAWS_DELETESIZECONSTRAINTSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class DeleteSizeConstraintSetRequestPrivate;

class QTAWSWAF_EXPORT DeleteSizeConstraintSetRequest : public WafRequest {

public:
    DeleteSizeConstraintSetRequest(const DeleteSizeConstraintSetRequest &other);
    DeleteSizeConstraintSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSizeConstraintSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
