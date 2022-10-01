// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELISTENERRESPONSE_H
#define QTAWS_UPDATELISTENERRESPONSE_H

#include "globalacceleratorresponse.h"
#include "updatelistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateListenerResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateListenerResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    UpdateListenerResponse(const UpdateListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateListenerResponse)
    Q_DISABLE_COPY(UpdateListenerResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
