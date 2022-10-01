// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDHCPOPTIONSRESPONSE_H
#define QTAWS_ASSOCIATEDHCPOPTIONSRESPONSE_H

#include "ec2response.h"
#include "associatedhcpoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateDhcpOptionsResponsePrivate;

class QTAWSEC2_EXPORT AssociateDhcpOptionsResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateDhcpOptionsResponse(const AssociateDhcpOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDhcpOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDhcpOptionsResponse)
    Q_DISABLE_COPY(AssociateDhcpOptionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
