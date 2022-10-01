// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDATASHARECONSUMERRESPONSE_H
#define QTAWS_ASSOCIATEDATASHARECONSUMERRESPONSE_H

#include "redshiftresponse.h"
#include "associatedatashareconsumerrequest.h"

namespace QtAws {
namespace Redshift {

class AssociateDataShareConsumerResponsePrivate;

class QTAWSREDSHIFT_EXPORT AssociateDataShareConsumerResponse : public RedshiftResponse {
    Q_OBJECT

public:
    AssociateDataShareConsumerResponse(const AssociateDataShareConsumerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDataShareConsumerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDataShareConsumerResponse)
    Q_DISABLE_COPY(AssociateDataShareConsumerResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
