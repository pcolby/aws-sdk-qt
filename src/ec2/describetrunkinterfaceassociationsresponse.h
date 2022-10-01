// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUNKINTERFACEASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBETRUNKINTERFACEASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "describetrunkinterfaceassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrunkInterfaceAssociationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeTrunkInterfaceAssociationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTrunkInterfaceAssociationsResponse(const DescribeTrunkInterfaceAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrunkInterfaceAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrunkInterfaceAssociationsResponse)
    Q_DISABLE_COPY(DescribeTrunkInterfaceAssociationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
