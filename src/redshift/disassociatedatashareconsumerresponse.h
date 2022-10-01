// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDATASHARECONSUMERRESPONSE_H
#define QTAWS_DISASSOCIATEDATASHARECONSUMERRESPONSE_H

#include "redshiftresponse.h"
#include "disassociatedatashareconsumerrequest.h"

namespace QtAws {
namespace Redshift {

class DisassociateDataShareConsumerResponsePrivate;

class QTAWSREDSHIFT_EXPORT DisassociateDataShareConsumerResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DisassociateDataShareConsumerResponse(const DisassociateDataShareConsumerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateDataShareConsumerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDataShareConsumerResponse)
    Q_DISABLE_COPY(DisassociateDataShareConsumerResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
