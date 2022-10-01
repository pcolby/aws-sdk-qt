// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCELERATORRESPONSE_H
#define QTAWS_DELETEACCELERATORRESPONSE_H

#include "globalacceleratorresponse.h"
#include "deleteacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteAcceleratorResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteAcceleratorResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DeleteAcceleratorResponse(const DeleteAcceleratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAcceleratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAcceleratorResponse)
    Q_DISABLE_COPY(DeleteAcceleratorResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
