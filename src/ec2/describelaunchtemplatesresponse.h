// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHTEMPLATESRESPONSE_H
#define QTAWS_DESCRIBELAUNCHTEMPLATESRESPONSE_H

#include "ec2response.h"
#include "describelaunchtemplatesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLaunchTemplatesResponsePrivate;

class QTAWSEC2_EXPORT DescribeLaunchTemplatesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeLaunchTemplatesResponse(const DescribeLaunchTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLaunchTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLaunchTemplatesResponse)
    Q_DISABLE_COPY(DescribeLaunchTemplatesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
