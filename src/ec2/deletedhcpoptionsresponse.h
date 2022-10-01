// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDHCPOPTIONSRESPONSE_H
#define QTAWS_DELETEDHCPOPTIONSRESPONSE_H

#include "ec2response.h"
#include "deletedhcpoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteDhcpOptionsResponsePrivate;

class QTAWSEC2_EXPORT DeleteDhcpOptionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteDhcpOptionsResponse(const DeleteDhcpOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDhcpOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDhcpOptionsResponse)
    Q_DISABLE_COPY(DeleteDhcpOptionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
