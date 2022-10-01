// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINSTANCESRESPONSE_H
#define QTAWS_REBOOTINSTANCESRESPONSE_H

#include "ec2response.h"
#include "rebootinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class RebootInstancesResponsePrivate;

class QTAWSEC2_EXPORT RebootInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    RebootInstancesResponse(const RebootInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootInstancesResponse)
    Q_DISABLE_COPY(RebootInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
