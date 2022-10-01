// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEHOSTSRESPONSE_H
#define QTAWS_ALLOCATEHOSTSRESPONSE_H

#include "ec2response.h"
#include "allocatehostsrequest.h"

namespace QtAws {
namespace Ec2 {

class AllocateHostsResponsePrivate;

class QTAWSEC2_EXPORT AllocateHostsResponse : public Ec2Response {
    Q_OBJECT

public:
    AllocateHostsResponse(const AllocateHostsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllocateHostsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateHostsResponse)
    Q_DISABLE_COPY(AllocateHostsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
