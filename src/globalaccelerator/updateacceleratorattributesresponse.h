// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCELERATORATTRIBUTESRESPONSE_H
#define QTAWS_UPDATEACCELERATORATTRIBUTESRESPONSE_H

#include "globalacceleratorresponse.h"
#include "updateacceleratorattributesrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateAcceleratorAttributesResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateAcceleratorAttributesResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    UpdateAcceleratorAttributesResponse(const UpdateAcceleratorAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAcceleratorAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAcceleratorAttributesResponse)
    Q_DISABLE_COPY(UpdateAcceleratorAttributesResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
