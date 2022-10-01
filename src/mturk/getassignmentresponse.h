// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSIGNMENTRESPONSE_H
#define QTAWS_GETASSIGNMENTRESPONSE_H

#include "mturkresponse.h"
#include "getassignmentrequest.h"

namespace QtAws {
namespace MTurk {

class GetAssignmentResponsePrivate;

class QTAWSMTURK_EXPORT GetAssignmentResponse : public MTurkResponse {
    Q_OBJECT

public:
    GetAssignmentResponse(const GetAssignmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssignmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssignmentResponse)
    Q_DISABLE_COPY(GetAssignmentResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
