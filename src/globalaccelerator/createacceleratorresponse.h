// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCELERATORRESPONSE_H
#define QTAWS_CREATEACCELERATORRESPONSE_H

#include "globalacceleratorresponse.h"
#include "createacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateAcceleratorResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT CreateAcceleratorResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    CreateAcceleratorResponse(const CreateAcceleratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAcceleratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAcceleratorResponse)
    Q_DISABLE_COPY(CreateAcceleratorResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
