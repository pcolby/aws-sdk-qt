// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSESREQUEST_H
#define QTAWS_LISTLENSESREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensesRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ListLensesRequest : public WellArchitectedRequest {

public:
    ListLensesRequest(const ListLensesRequest &other);
    ListLensesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLensesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
