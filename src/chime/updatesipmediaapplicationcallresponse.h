// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPMEDIAAPPLICATIONCALLRESPONSE_H
#define QTAWS_UPDATESIPMEDIAAPPLICATIONCALLRESPONSE_H

#include "chimeresponse.h"
#include "updatesipmediaapplicationcallrequest.h"

namespace QtAws {
namespace Chime {

class UpdateSipMediaApplicationCallResponsePrivate;

class QTAWSCHIME_EXPORT UpdateSipMediaApplicationCallResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateSipMediaApplicationCallResponse(const UpdateSipMediaApplicationCallRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSipMediaApplicationCallRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSipMediaApplicationCallResponse)
    Q_DISABLE_COPY(UpdateSipMediaApplicationCallResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
