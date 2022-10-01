// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRUNKINTERFACERESPONSE_H
#define QTAWS_ASSOCIATETRUNKINTERFACERESPONSE_H

#include "ec2response.h"
#include "associatetrunkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateTrunkInterfaceResponsePrivate;

class QTAWSEC2_EXPORT AssociateTrunkInterfaceResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateTrunkInterfaceResponse(const AssociateTrunkInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTrunkInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTrunkInterfaceResponse)
    Q_DISABLE_COPY(AssociateTrunkInterfaceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
