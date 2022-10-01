// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATESTATICIPRESPONSE_H
#define QTAWS_ALLOCATESTATICIPRESPONSE_H

#include "lightsailresponse.h"
#include "allocatestaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class AllocateStaticIpResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT AllocateStaticIpResponse : public LightsailResponse {
    Q_OBJECT

public:
    AllocateStaticIpResponse(const AllocateStaticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllocateStaticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateStaticIpResponse)
    Q_DISABLE_COPY(AllocateStaticIpResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
