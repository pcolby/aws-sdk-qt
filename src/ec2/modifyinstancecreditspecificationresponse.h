// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCECREDITSPECIFICATIONRESPONSE_H
#define QTAWS_MODIFYINSTANCECREDITSPECIFICATIONRESPONSE_H

#include "ec2response.h"
#include "modifyinstancecreditspecificationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceCreditSpecificationResponsePrivate;

class QTAWSEC2_EXPORT ModifyInstanceCreditSpecificationResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyInstanceCreditSpecificationResponse(const ModifyInstanceCreditSpecificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceCreditSpecificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceCreditSpecificationResponse)
    Q_DISABLE_COPY(ModifyInstanceCreditSpecificationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
