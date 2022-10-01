// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINTERFACERESPONSE_H
#define QTAWS_DELETENETWORKINTERFACERESPONSE_H

#include "ec2response.h"
#include "deletenetworkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInterfaceResponsePrivate;

class QTAWSEC2_EXPORT DeleteNetworkInterfaceResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteNetworkInterfaceResponse(const DeleteNetworkInterfaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkInterfaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInterfaceResponse)
    Q_DISABLE_COPY(DeleteNetworkInterfaceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
