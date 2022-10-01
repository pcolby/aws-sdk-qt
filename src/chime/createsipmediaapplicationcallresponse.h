// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPMEDIAAPPLICATIONCALLRESPONSE_H
#define QTAWS_CREATESIPMEDIAAPPLICATIONCALLRESPONSE_H

#include "chimeresponse.h"
#include "createsipmediaapplicationcallrequest.h"

namespace QtAws {
namespace Chime {

class CreateSipMediaApplicationCallResponsePrivate;

class QTAWSCHIME_EXPORT CreateSipMediaApplicationCallResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateSipMediaApplicationCallResponse(const CreateSipMediaApplicationCallRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSipMediaApplicationCallRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSipMediaApplicationCallResponse)
    Q_DISABLE_COPY(CreateSipMediaApplicationCallResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
