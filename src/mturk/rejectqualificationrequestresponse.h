// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTQUALIFICATIONREQUESTRESPONSE_H
#define QTAWS_REJECTQUALIFICATIONREQUESTRESPONSE_H

#include "mturkresponse.h"
#include "rejectqualificationrequestrequest.h"

namespace QtAws {
namespace MTurk {

class RejectQualificationRequestResponsePrivate;

class QTAWSMTURK_EXPORT RejectQualificationRequestResponse : public MTurkResponse {
    Q_OBJECT

public:
    RejectQualificationRequestResponse(const RejectQualificationRequestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectQualificationRequestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectQualificationRequestResponse)
    Q_DISABLE_COPY(RejectQualificationRequestResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
