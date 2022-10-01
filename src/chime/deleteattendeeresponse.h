// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTENDEERESPONSE_H
#define QTAWS_DELETEATTENDEERESPONSE_H

#include "chimeresponse.h"
#include "deleteattendeerequest.h"

namespace QtAws {
namespace Chime {

class DeleteAttendeeResponsePrivate;

class QTAWSCHIME_EXPORT DeleteAttendeeResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteAttendeeResponse(const DeleteAttendeeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAttendeeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAttendeeResponse)
    Q_DISABLE_COPY(DeleteAttendeeResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
