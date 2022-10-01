// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSOLDERTHANORDERINGIDREQUEST_H
#define QTAWS_LISTGROUPSOLDERTHANORDERINGIDREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ListGroupsOlderThanOrderingIdRequestPrivate;

class QTAWSKENDRA_EXPORT ListGroupsOlderThanOrderingIdRequest : public KendraRequest {

public:
    ListGroupsOlderThanOrderingIdRequest(const ListGroupsOlderThanOrderingIdRequest &other);
    ListGroupsOlderThanOrderingIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupsOlderThanOrderingIdRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
