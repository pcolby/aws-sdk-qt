// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIPMEDIAAPPLICATIONRESPONSE_H
#define QTAWS_DELETESIPMEDIAAPPLICATIONRESPONSE_H

#include "chimeresponse.h"
#include "deletesipmediaapplicationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteSipMediaApplicationResponsePrivate;

class QTAWSCHIME_EXPORT DeleteSipMediaApplicationResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteSipMediaApplicationResponse(const DeleteSipMediaApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSipMediaApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSipMediaApplicationResponse)
    Q_DISABLE_COPY(DeleteSipMediaApplicationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
