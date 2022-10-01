// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPMEDIAAPPLICATIONRESPONSE_H
#define QTAWS_CREATESIPMEDIAAPPLICATIONRESPONSE_H

#include "chimeresponse.h"
#include "createsipmediaapplicationrequest.h"

namespace QtAws {
namespace Chime {

class CreateSipMediaApplicationResponsePrivate;

class QTAWSCHIME_EXPORT CreateSipMediaApplicationResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateSipMediaApplicationResponse(const CreateSipMediaApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSipMediaApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSipMediaApplicationResponse)
    Q_DISABLE_COPY(CreateSipMediaApplicationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
