// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGDIALOUTRESPONSE_H
#define QTAWS_CREATEMEETINGDIALOUTRESPONSE_H

#include "chimeresponse.h"
#include "createmeetingdialoutrequest.h"

namespace QtAws {
namespace Chime {

class CreateMeetingDialOutResponsePrivate;

class QTAWSCHIME_EXPORT CreateMeetingDialOutResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateMeetingDialOutResponse(const CreateMeetingDialOutRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMeetingDialOutRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMeetingDialOutResponse)
    Q_DISABLE_COPY(CreateMeetingDialOutResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
