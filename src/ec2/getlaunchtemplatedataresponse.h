// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHTEMPLATEDATARESPONSE_H
#define QTAWS_GETLAUNCHTEMPLATEDATARESPONSE_H

#include "ec2response.h"
#include "getlaunchtemplatedatarequest.h"

namespace QtAws {
namespace Ec2 {

class GetLaunchTemplateDataResponsePrivate;

class QTAWSEC2_EXPORT GetLaunchTemplateDataResponse : public Ec2Response {
    Q_OBJECT

public:
    GetLaunchTemplateDataResponse(const GetLaunchTemplateDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLaunchTemplateDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchTemplateDataResponse)
    Q_DISABLE_COPY(GetLaunchTemplateDataResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
