// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPMEDIAAPPLICATIONRESPONSE_H
#define QTAWS_GETSIPMEDIAAPPLICATIONRESPONSE_H

#include "chimeresponse.h"
#include "getsipmediaapplicationrequest.h"

namespace QtAws {
namespace Chime {

class GetSipMediaApplicationResponsePrivate;

class QTAWSCHIME_EXPORT GetSipMediaApplicationResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetSipMediaApplicationResponse(const GetSipMediaApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSipMediaApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSipMediaApplicationResponse)
    Q_DISABLE_COPY(GetSipMediaApplicationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
