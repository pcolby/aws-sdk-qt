// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPMEDIAAPPLICATIONRESPONSE_H
#define QTAWS_UPDATESIPMEDIAAPPLICATIONRESPONSE_H

#include "chimeresponse.h"
#include "updatesipmediaapplicationrequest.h"

namespace QtAws {
namespace Chime {

class UpdateSipMediaApplicationResponsePrivate;

class QTAWSCHIME_EXPORT UpdateSipMediaApplicationResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateSipMediaApplicationResponse(const UpdateSipMediaApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSipMediaApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSipMediaApplicationResponse)
    Q_DISABLE_COPY(UpdateSipMediaApplicationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
