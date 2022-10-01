// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOIPPOOLUSAGERESPONSE_H
#define QTAWS_GETCOIPPOOLUSAGERESPONSE_H

#include "ec2response.h"
#include "getcoippoolusagerequest.h"

namespace QtAws {
namespace Ec2 {

class GetCoipPoolUsageResponsePrivate;

class QTAWSEC2_EXPORT GetCoipPoolUsageResponse : public Ec2Response {
    Q_OBJECT

public:
    GetCoipPoolUsageResponse(const GetCoipPoolUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCoipPoolUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoipPoolUsageResponse)
    Q_DISABLE_COPY(GetCoipPoolUsageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
