// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEASSOCIATIONSTATUSRESPONSE_H
#define QTAWS_DESCRIBENODEASSOCIATIONSTATUSRESPONSE_H

#include "opsworkscmresponse.h"
#include "describenodeassociationstatusrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeNodeAssociationStatusResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT DescribeNodeAssociationStatusResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    DescribeNodeAssociationStatusResponse(const DescribeNodeAssociationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNodeAssociationStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNodeAssociationStatusResponse)
    Q_DISABLE_COPY(DescribeNodeAssociationStatusResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
