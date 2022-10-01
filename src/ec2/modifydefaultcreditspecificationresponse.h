// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDEFAULTCREDITSPECIFICATIONRESPONSE_H
#define QTAWS_MODIFYDEFAULTCREDITSPECIFICATIONRESPONSE_H

#include "ec2response.h"
#include "modifydefaultcreditspecificationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyDefaultCreditSpecificationResponsePrivate;

class QTAWSEC2_EXPORT ModifyDefaultCreditSpecificationResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyDefaultCreditSpecificationResponse(const ModifyDefaultCreditSpecificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDefaultCreditSpecificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDefaultCreditSpecificationResponse)
    Q_DISABLE_COPY(ModifyDefaultCreditSpecificationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
