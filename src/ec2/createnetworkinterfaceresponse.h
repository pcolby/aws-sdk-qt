// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINTERFACERESPONSE_H
#define QTAWS_CREATENETWORKINTERFACERESPONSE_H

#include "ec2response.h"
#include "createnetworkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInterfaceResponsePrivate;

class QTAWSEC2_EXPORT CreateNetworkInterfaceResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateNetworkInterfaceResponse(const CreateNetworkInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkInterfaceResponse)
    Q_DISABLE_COPY(CreateNetworkInterfaceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
