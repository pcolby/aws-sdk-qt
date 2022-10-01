// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEINSTANCEEVENTWINDOWRESPONSE_H
#define QTAWS_DISASSOCIATEINSTANCEEVENTWINDOWRESPONSE_H

#include "ec2response.h"
#include "disassociateinstanceeventwindowrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateInstanceEventWindowResponsePrivate;

class QTAWSEC2_EXPORT DisassociateInstanceEventWindowResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateInstanceEventWindowResponse(const DisassociateInstanceEventWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateInstanceEventWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateInstanceEventWindowResponse)
    Q_DISABLE_COPY(DisassociateInstanceEventWindowResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
