// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCESREQUEST_H
#define QTAWS_LISTAPPINSTANCESREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListAppInstancesRequestPrivate;

class QTAWSCHIME_EXPORT ListAppInstancesRequest : public ChimeRequest {

public:
    ListAppInstancesRequest(const ListAppInstancesRequest &other);
    ListAppInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstancesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
