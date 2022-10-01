// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSSHARESREQUEST_H
#define QTAWS_LISTLENSSHARESREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensSharesRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ListLensSharesRequest : public WellArchitectedRequest {

public:
    ListLensSharesRequest(const ListLensSharesRequest &other);
    ListLensSharesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLensSharesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
