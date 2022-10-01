// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHNETWORKINTERFACERESPONSE_H
#define QTAWS_ATTACHNETWORKINTERFACERESPONSE_H

#include "ec2response.h"
#include "attachnetworkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class AttachNetworkInterfaceResponsePrivate;

class QTAWSEC2_EXPORT AttachNetworkInterfaceResponse : public Ec2Response {
    Q_OBJECT

public:
    AttachNetworkInterfaceResponse(const AttachNetworkInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachNetworkInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachNetworkInterfaceResponse)
    Q_DISABLE_COPY(AttachNetworkInterfaceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
