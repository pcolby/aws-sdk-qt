// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELENSESREQUEST_H
#define QTAWS_ASSOCIATELENSESREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class AssociateLensesRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT AssociateLensesRequest : public WellArchitectedRequest {

public:
    AssociateLensesRequest(const AssociateLensesRequest &other);
    AssociateLensesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLensesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
