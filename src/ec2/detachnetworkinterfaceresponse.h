// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHNETWORKINTERFACERESPONSE_H
#define QTAWS_DETACHNETWORKINTERFACERESPONSE_H

#include "ec2response.h"
#include "detachnetworkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class DetachNetworkInterfaceResponsePrivate;

class QTAWSEC2_EXPORT DetachNetworkInterfaceResponse : public Ec2Response {
    Q_OBJECT

public:
    DetachNetworkInterfaceResponse(const DetachNetworkInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachNetworkInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachNetworkInterfaceResponse)
    Q_DISABLE_COPY(DetachNetworkInterfaceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
