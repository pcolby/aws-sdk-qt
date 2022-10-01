// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDCAPACITYREQUEST_H
#define QTAWS_LISTPROVISIONEDCAPACITYREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class ListProvisionedCapacityRequestPrivate;

class QTAWSGLACIER_EXPORT ListProvisionedCapacityRequest : public GlacierRequest {

public:
    ListProvisionedCapacityRequest(const ListProvisionedCapacityRequest &other);
    ListProvisionedCapacityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisionedCapacityRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
