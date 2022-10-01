// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESEGMENTRESPONSE_H
#define QTAWS_DELETESEGMENTRESPONSE_H

#include "pinpointresponse.h"
#include "deletesegmentrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSegmentResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteSegmentResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteSegmentResponse(const DeleteSegmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSegmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSegmentResponse)
    Q_DISABLE_COPY(DeleteSegmentResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
