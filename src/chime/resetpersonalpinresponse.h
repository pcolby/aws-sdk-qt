// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPERSONALPINRESPONSE_H
#define QTAWS_RESETPERSONALPINRESPONSE_H

#include "chimeresponse.h"
#include "resetpersonalpinrequest.h"

namespace QtAws {
namespace Chime {

class ResetPersonalPINResponsePrivate;

class QTAWSCHIME_EXPORT ResetPersonalPINResponse : public ChimeResponse {
    Q_OBJECT

public:
    ResetPersonalPINResponse(const ResetPersonalPINRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetPersonalPINRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetPersonalPINResponse)
    Q_DISABLE_COPY(ResetPersonalPINResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
