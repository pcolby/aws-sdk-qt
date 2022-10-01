// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTQUALIFICATIONREQUESTRESPONSE_H
#define QTAWS_ACCEPTQUALIFICATIONREQUESTRESPONSE_H

#include "mturkresponse.h"
#include "acceptqualificationrequestrequest.h"

namespace QtAws {
namespace MTurk {

class AcceptQualificationRequestResponsePrivate;

class QTAWSMTURK_EXPORT AcceptQualificationRequestResponse : public MTurkResponse {
    Q_OBJECT

public:
    AcceptQualificationRequestResponse(const AcceptQualificationRequestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptQualificationRequestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptQualificationRequestResponse)
    Q_DISABLE_COPY(AcceptQualificationRequestResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
