// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDHCPOPTIONSRESPONSE_H
#define QTAWS_CREATEDHCPOPTIONSRESPONSE_H

#include "ec2response.h"
#include "createdhcpoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateDhcpOptionsResponsePrivate;

class QTAWSEC2_EXPORT CreateDhcpOptionsResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateDhcpOptionsResponse(const CreateDhcpOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDhcpOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDhcpOptionsResponse)
    Q_DISABLE_COPY(CreateDhcpOptionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
