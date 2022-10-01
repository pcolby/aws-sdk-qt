// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICIPSRESPONSE_H
#define QTAWS_DESCRIBEELASTICIPSRESPONSE_H

#include "opsworksresponse.h"
#include "describeelasticipsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeElasticIpsResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeElasticIpsResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeElasticIpsResponse(const DescribeElasticIpsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeElasticIpsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeElasticIpsResponse)
    Q_DISABLE_COPY(DescribeElasticIpsResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
