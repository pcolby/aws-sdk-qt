// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRINCIPALIDFORMATRESPONSE_H
#define QTAWS_DESCRIBEPRINCIPALIDFORMATRESPONSE_H

#include "ec2response.h"
#include "describeprincipalidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribePrincipalIdFormatResponsePrivate;

class QTAWSEC2_EXPORT DescribePrincipalIdFormatResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribePrincipalIdFormatResponse(const DescribePrincipalIdFormatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePrincipalIdFormatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePrincipalIdFormatResponse)
    Q_DISABLE_COPY(DescribePrincipalIdFormatResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
