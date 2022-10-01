// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_H
#define QTAWS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_H

#include "ec2response.h"
#include "describelaunchtemplateversionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLaunchTemplateVersionsResponsePrivate;

class QTAWSEC2_EXPORT DescribeLaunchTemplateVersionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeLaunchTemplateVersionsResponse(const DescribeLaunchTemplateVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLaunchTemplateVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLaunchTemplateVersionsResponse)
    Q_DISABLE_COPY(DescribeLaunchTemplateVersionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
