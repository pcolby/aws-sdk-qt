// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCESREQUEST_H
#define QTAWS_LISTSERVICEINSTANCESREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceInstancesRequestPrivate;

class QTAWSPROTON_EXPORT ListServiceInstancesRequest : public ProtonRequest {

public:
    ListServiceInstancesRequest(const ListServiceInstancesRequest &other);
    ListServiceInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceInstancesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
