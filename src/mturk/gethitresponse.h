// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHITRESPONSE_H
#define QTAWS_GETHITRESPONSE_H

#include "mturkresponse.h"
#include "gethitrequest.h"

namespace QtAws {
namespace MTurk {

class GetHITResponsePrivate;

class QTAWSMTURK_EXPORT GetHITResponse : public MTurkResponse {
    Q_OBJECT

public:
    GetHITResponse(const GetHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHITRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHITResponse)
    Q_DISABLE_COPY(GetHITResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
