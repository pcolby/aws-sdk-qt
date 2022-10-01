// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMACIESESSIONRESPONSE_H
#define QTAWS_UPDATEMACIESESSIONRESPONSE_H

#include "macie2response.h"
#include "updatemaciesessionrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateMacieSessionResponsePrivate;

class QTAWSMACIE2_EXPORT UpdateMacieSessionResponse : public Macie2Response {
    Q_OBJECT

public:
    UpdateMacieSessionResponse(const UpdateMacieSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMacieSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMacieSessionResponse)
    Q_DISABLE_COPY(UpdateMacieSessionResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
