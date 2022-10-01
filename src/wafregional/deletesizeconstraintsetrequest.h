// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIZECONSTRAINTSETREQUEST_H
#define QTAWS_DELETESIZECONSTRAINTSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteSizeConstraintSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteSizeConstraintSetRequest : public WafRegionalRequest {

public:
    DeleteSizeConstraintSetRequest(const DeleteSizeConstraintSetRequest &other);
    DeleteSizeConstraintSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSizeConstraintSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
