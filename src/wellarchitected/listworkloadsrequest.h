// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKLOADSREQUEST_H
#define QTAWS_LISTWORKLOADSREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListWorkloadsRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ListWorkloadsRequest : public WellArchitectedRequest {

public:
    ListWorkloadsRequest(const ListWorkloadsRequest &other);
    ListWorkloadsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkloadsRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
