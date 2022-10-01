// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPIRATIONFORHITRESPONSE_H
#define QTAWS_UPDATEEXPIRATIONFORHITRESPONSE_H

#include "mturkresponse.h"
#include "updateexpirationforhitrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateExpirationForHITResponsePrivate;

class QTAWSMTURK_EXPORT UpdateExpirationForHITResponse : public MTurkResponse {
    Q_OBJECT

public:
    UpdateExpirationForHITResponse(const UpdateExpirationForHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateExpirationForHITRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExpirationForHITResponse)
    Q_DISABLE_COPY(UpdateExpirationForHITResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
