// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELISTENERRESPONSE_H
#define QTAWS_DELETELISTENERRESPONSE_H

#include "globalacceleratorresponse.h"
#include "deletelistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteListenerResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteListenerResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DeleteListenerResponse(const DeleteListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteListenerResponse)
    Q_DISABLE_COPY(DeleteListenerResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
