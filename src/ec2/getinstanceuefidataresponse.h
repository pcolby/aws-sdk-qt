// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEUEFIDATARESPONSE_H
#define QTAWS_GETINSTANCEUEFIDATARESPONSE_H

#include "ec2response.h"
#include "getinstanceuefidatarequest.h"

namespace QtAws {
namespace Ec2 {

class GetInstanceUefiDataResponsePrivate;

class QTAWSEC2_EXPORT GetInstanceUefiDataResponse : public Ec2Response {
    Q_OBJECT

public:
    GetInstanceUefiDataResponse(const GetInstanceUefiDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceUefiDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceUefiDataResponse)
    Q_DISABLE_COPY(GetInstanceUefiDataResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
