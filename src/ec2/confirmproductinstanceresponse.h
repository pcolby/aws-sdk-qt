// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPRODUCTINSTANCERESPONSE_H
#define QTAWS_CONFIRMPRODUCTINSTANCERESPONSE_H

#include "ec2response.h"
#include "confirmproductinstancerequest.h"

namespace QtAws {
namespace Ec2 {

class ConfirmProductInstanceResponsePrivate;

class QTAWSEC2_EXPORT ConfirmProductInstanceResponse : public Ec2Response {
    Q_OBJECT

public:
    ConfirmProductInstanceResponse(const ConfirmProductInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmProductInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmProductInstanceResponse)
    Q_DISABLE_COPY(ConfirmProductInstanceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
