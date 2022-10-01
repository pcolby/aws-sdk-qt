// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGISTRIESRESPONSE_H
#define QTAWS_DESCRIBEREGISTRIESRESPONSE_H

#include "ecrpublicresponse.h"
#include "describeregistriesrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeRegistriesResponsePrivate;

class QTAWSECRPUBLIC_EXPORT DescribeRegistriesResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    DescribeRegistriesResponse(const DescribeRegistriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRegistriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRegistriesResponse)
    Q_DISABLE_COPY(DescribeRegistriesResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
