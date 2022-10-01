// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESERVEDINSTANCESLISTINGRESPONSE_H
#define QTAWS_CREATERESERVEDINSTANCESLISTINGRESPONSE_H

#include "ec2response.h"
#include "createreservedinstanceslistingrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateReservedInstancesListingResponsePrivate;

class QTAWSEC2_EXPORT CreateReservedInstancesListingResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateReservedInstancesListingResponse(const CreateReservedInstancesListingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReservedInstancesListingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReservedInstancesListingResponse)
    Q_DISABLE_COPY(CreateReservedInstancesListingResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
