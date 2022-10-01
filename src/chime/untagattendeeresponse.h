// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGATTENDEERESPONSE_H
#define QTAWS_UNTAGATTENDEERESPONSE_H

#include "chimeresponse.h"
#include "untagattendeerequest.h"

namespace QtAws {
namespace Chime {

class UntagAttendeeResponsePrivate;

class QTAWSCHIME_EXPORT UntagAttendeeResponse : public ChimeResponse {
    Q_OBJECT

public:
    UntagAttendeeResponse(const UntagAttendeeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagAttendeeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagAttendeeResponse)
    Q_DISABLE_COPY(UntagAttendeeResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
