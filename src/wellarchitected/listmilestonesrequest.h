// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMILESTONESREQUEST_H
#define QTAWS_LISTMILESTONESREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListMilestonesRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ListMilestonesRequest : public WellArchitectedRequest {

public:
    ListMilestonesRequest(const ListMilestonesRequest &other);
    ListMilestonesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMilestonesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
