// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCELERATORRESPONSE_H
#define QTAWS_UPDATEACCELERATORRESPONSE_H

#include "globalacceleratorresponse.h"
#include "updateacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateAcceleratorResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateAcceleratorResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    UpdateAcceleratorResponse(const UpdateAcceleratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAcceleratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAcceleratorResponse)
    Q_DISABLE_COPY(UpdateAcceleratorResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
